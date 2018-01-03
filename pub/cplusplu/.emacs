(define-key global-map "" 'beautify)
(define-key global-map "" 'beautify-quick)
(define-key global-map "" 'measure)

(defun measure () 
    (interactive) 
    (let (the-command the-line the-buffer 
               the-file-name outbuf process-ret the-message result output-file)

        ;; save bufffers if necessary
        ;;(save-some-buffers nil nil)
        ;; (font-lock-mode 0)
        (setq result t)

        ;; compute position,buffer name and file name
        (beginning-of-line)
        (setq the-line (1+ (count-lines 1 (point))))
        (setq the-buffer (buffer-name))
        (setq the-file-name buffer-file-name)
        (write-file the-file-name)

        ;; compute starting line of page
        (goto-char (window-start))
        (setq start-page-line (1+ (count-lines 1 (point))))

        ;; create a buffer to display cpb output
        (setq outbuf (get-buffer-create "Measure"))
        (set-buffer outbuf)
        (erase-buffer)

        ;; execute command erscale
        (setq the-command "erlscale")
        (setq output-file (concat
	    (file-name-directory the-file-name)
            "res.cpb"))

        (setq process-ret
            (call-process the-command nil outbuf nil 
                the-file-name ))

        ;; look if command succeeded and display result if not
        (set-buffer outbuf)
        (goto-line 1)
        (setq process-ret 
            (search-forward "No Error Found" nil t))

        ;; indicates that we are finished
        ;; or the error message
        (if (eq process-ret nil)
            (progn 
                (goto-line 1)
                (re-search-forward "^\\(.*\\)#line \\([0-9]*\\)\\(.*\\)$")
                (message (buffer-substring (match-beginning 1)
                      (match-end 3)))
                (setq the-line (string-to-number
                   (buffer-substring (match-beginning 2)
                                (match-end 2))))
                (setq result nil))
            (message "File is Correct"))
            
        ;; put back cursor
        (set-buffer the-buffer)
        (goto-line start-page-line)
        (recenter 0)
        (goto-line the-line)
        ( if (or (< the-line start-page-line) 
                 (> the-line (- (+ start-page-line (window-height)) 3)))
            (recenter))))

(defun beautify-internal ( on-left )  
    (let (the-command the-line the-buffer 
               the-file-name outbuf process-ret the-message result output-file)

        ;; save bufffers if necessary
        ;;(save-some-buffers nil nil)
        (font-lock-mode 0)
        (setq result t)

        ;; compute position,buffer name and file name
        (beginning-of-line)
        (setq the-line (1+ (count-lines 1 (point))))
        (setq the-buffer (buffer-name))
        (setq the-file-name buffer-file-name)
        (write-file the-file-name)

        ;; compute starting line of page
        (goto-char (window-start))
        (setq start-page-line (1+ (count-lines 1 (point))))

        ;; create a buffer to display cpb output
        (setq outbuf (get-buffer-create "Beautify"))
        (set-buffer outbuf)
        (erase-buffer)

        ;; execute command cpb
	(setq the-command "cpbem")
        (setq output-file (concat
	    (file-name-directory the-file-name)
            "res.cpb"))
	(if (eq on-left nil)
	    (setq process-ret
		  (call-process the-command nil outbuf nil 
		      the-file-name output-file))
	    (setq process-ret
		  (call-process the-command nil outbuf nil 
		      "-flat" the-file-name output-file)))
        
         
        ;; look if command succeeded and display result if not
        (set-buffer outbuf)
        (goto-line 1)
        (setq process-ret
	    (setq asn-prettyprinting 
                (search-forward "asn pretty printing" nil t)))
        (if (eq process-ret nil)
	    (progn
                (goto-line 1)
                (setq process-ret 
                    (search-forward "see file COPYING" nil t))))

        ;; indicates that we are finished
        ;; or the error message
        (if (eq process-ret nil)
            (progn 
                (goto-line 1)
                (re-search-forward "^\\(.*\\)at line \\([0-9]*\\)")
                (message (buffer-substring (match-beginning 1)
                      (match-end 1)))
                (setq the-line (string-to-number
                   (buffer-substring (match-beginning 2)
                                (match-end 2))))
                (setq result nil)))
            
        ;; reload file
        (set-buffer the-buffer)
        (if result
            (progn
                (erase-buffer)
                (insert-file output-file)))

        ;; put back cursor
        (goto-line start-page-line)
        (recenter 0)
        (goto-line the-line)
        ( if (or (< the-line start-page-line) 
                 (> the-line (- (+ start-page-line (window-height)) 3)))
            (recenter))

        ;; put again beautiful fonts
        (if result
            (progn
                (write-file the-file-name)
                (if (eq asn-prettyprinting nil)
                     (progn 
		         (c++-mode)
                         (font-lock-mode 1)))
                (call-process "rm" nil nil nil output-file)
                (message "Pretty printing is finished")))

))

(defun beautify ()
    (interactive)
    (beautify-internal nil))


(defun main-outline-mode ()
    (interactive)
    (beautify-internal t)
    (if (not selective-display)
        (outline-mode))
    (hide-body)
    (show-subtree)
)

