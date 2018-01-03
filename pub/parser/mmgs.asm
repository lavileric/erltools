;	Static Name Aliases
;
;	$S240_theTime	EQU	theTime
;	$S241_maxpos	EQU	maxpos
;	$S242_posBuffer	EQU	posBuffer
;	$S243_timeBuffer	EQU	timeBuffer
;	$S244_contBuffer	EQU	contBuffer
;	$S245_currentBuffer	EQU	currentBuffer
;	$S246_cacheFile	EQU	cacheFile
;	$S247_freeList	EQU	freeList
;	$S248_keepElem	EQU	keepElem
	TITLE   memges.c
	NAME    memges

	.286p
;    .287
MEMGES_TEXT	SEGMENT  WORD PUBLIC 'CODE'
MEMGES_TEXT	ENDS
_DATA	SEGMENT  WORD PUBLIC 'DATA'
_DATA	ENDS
CONST	SEGMENT  WORD PUBLIC 'CONST'
CONST	ENDS
_BSS	SEGMENT  WORD PUBLIC 'BSS'
_BSS	ENDS
MEMGES5_DATA	SEGMENT  PARA PUBLIC 'FAR_DATA'
MEMGES5_DATA	ENDS
DGROUP	GROUP	CONST, _BSS, _DATA
	ASSUME  CS: MEMGES_TEXT, DS: DGROUP, SS: DGROUP
EXTRN	__acrtused:ABS
EXTRN	_malloc:FAR
EXTRN	_printf:FAR
EXTRN	_close:FAR
EXTRN	_lseek:FAR
EXTRN	__aFldiv:FAR
EXTRN	_open:FAR
EXTRN	_read:FAR
EXTRN	_remove:FAR
EXTRN	_exit:FAR
EXTRN	_write:FAR
EXTRN   _TMP_NAME:DWORD
_DATA      SEGMENT

	ORG $+14
$SG311  DB  'File system is full ',  0aH,  00H
$SG315  DB  ' Illegal access to file system ',  0aH,  00H
$SG663  DB  ' Illegal read for  file system ',  0aH,  00H
$SG363  DB  'double free ',  0aH,  00H
	ORG $-116
$S241_maxpos    DD  00H
$S245_currentBuffer DW  00H
$S247_freeList  DD  00H
$S248_keepElem  DD  00H
_DATA      ENDS
_BSS      SEGMENT
$S240_theTime   DW 02H DUP (?)
	ORG $+18
$S242_posBuffer DW 01eH DUP (?)
$S243_timeBuffer    DW 01eH DUP (?)
	ORG $-138
_writeBuffer   DB 0fH DUP (?)
_BSS      ENDS
MEMGES5_DATA      SEGMENT
$S244_contBuffer    DW 07800H DUP (?)
MEMGES5_DATA      ENDS
_BSS      SEGMENT
	ORG $+1
$S246_cacheFile DW 01H DUP (?)
_BSS      ENDS
MEMGES_TEXT      SEGMENT
	ASSUME  CS: MEMGES_TEXT


;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
; CacheRead                                 ;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

	PUBLIC	_CacheRead
_CacheRead	PROC FAR
	enter   WORD PTR 0,0
	push	si
; Line 43
;	position = 6
;	cache = -2
;	cachePosition = -6
;   ret = -10

	DB 66h
	mov  cx, WORD PTR [bp+6]     ; position a lire
	xor  bx, bx
	lea  si, $S242_posBuffer     ; tableau posBuffer

progCacheRead :

	db  66h
	mov ax, WORD PTR [SI]        ; debut du nieme buffer
	db  66h
	cmp ax, cx
	jg  suiteCacheRead
	db 66h
	add ax, 4095
	dw 00h
	db 66h
	cmp ax,cx
	jl suiteCacheRead
	db 66h
	mov ax, WORD PTR $S240_theTime
	db 66h
	inc ax
	db 66h
	mov WORD PTR $S240_theTime, ax
	mov dx,si
	mov si, bx
	shl si, 2
	db 66h
	mov $S243_timeBuffer[si],   ax
	mov si,dx

	db 66h
	mov ax, WORD PTR [SI]
	db 66h
	sub cx, ax
	xor ax, ax
	mov al, bl
	shl ax, 12
	add ax, cx
	mov bx, SEG $S244_contBuffer
	mov es, bx
	mov si, ax
	mov ax, WORD PTR es:[si]
	pop si
	leave
	ret

suiteCacheRead :

	db 66h
	add si, 4
	inc bl
	cmp bl,15
	jl progCacheRead
	db  66h
	mov  si, cx
	db 66h
	push cx
	call FAR PTR _BufferPosition
	add sp, 4
	db  66h
	mov cx, si              ; restaure position
	mov ax, $S245_currentBuffer
	mov bx, ax
	shl ax, 2
	lea si, $S242_posBuffer
	add si, ax              ; BufferPosition[currentBuffer]
	jmp SHORT progCacheRead

_CacheRead  ENDP

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
; CacheAddrRead                                 ;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

	PUBLIC  _CacheAddrRead
_CacheAddrRead  PROC FAR
	enter   WORD PTR 0,0
	push    si

	DB 66h
	mov  cx, WORD PTR [bp+6]     ; position a lire
	xor  bx, bx
	lea  si, $S242_posBuffer     ; tableau posBuffer

progCacheAddrRead :

	db  66h
	mov ax, WORD PTR [SI]        ; debut du nieme buffer
	db  66h
	cmp ax, cx
	jg  suiteCacheAddrRead
	db 66h
	add ax, 4095
	dw 00h
	db 66h
	cmp ax,cx
	jl suiteCacheAddrRead
	db 66h
	mov ax, WORD PTR $S240_theTime
	db 66h
	inc ax
	db 66h
	mov WORD PTR $S240_theTime, ax
	mov dx,si
	mov si, bx
	shl si, 2
	db 66h
	mov $S243_timeBuffer[si],   ax
	mov si,dx

	db 66h
	mov ax, WORD PTR [SI]
	db 66h
	sub cx, ax
	xor ax, ax
	mov al, bl
	shl ax, 12
	add ax, cx
	mov dx, SEG $S244_contBuffer
	pop si
	leave
	ret

suiteCacheAddrRead :

	db 66h
	add si, 4
	inc bl
	cmp bl,15
	jl progCacheAddrRead
	db  66h
	mov  si, cx
	db 66h
	push cx
	call FAR PTR _BufferPosition
	add sp, 4
	db  66h
	mov cx, si              ; restaure position
	mov ax, $S245_currentBuffer
	mov bx, ax
	shl ax, 2
	lea si, $S242_posBuffer
	add si, ax              ; BufferPosition[currentBuffer]
	jmp SHORT progCacheAddrRead

_CacheAddrRead  ENDP

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
; CacheAddrReadM                                 ;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
; idem as CacheAddrRead but indicates that we will
; modify the data which is at the address

	PUBLIC  _CacheAddrReadM
_CacheAddrReadM  PROC FAR
	enter   WORD PTR 0,0
	push    si

	DB 66h
	mov  cx, WORD PTR [bp+6]     ; position a lire
	xor  bx, bx
	lea  si, $S242_posBuffer     ; tableau posBuffer

progCacheAddrReadM :

	db  66h
	mov ax, WORD PTR [SI]        ; debut du nieme buffer
	db  66h
	cmp ax, cx
	jg  suiteCacheAddrReadM
	db 66h
	add ax, 4095
	dw 00h
	db 66h
	cmp ax,cx
	jl suiteCacheAddrReadM
	db 66h
	mov ax, WORD PTR $S240_theTime
	db 66h
	inc ax
	db 66h
	mov WORD PTR $S240_theTime, ax
	mov dx,si
	mov si, bx
	shl si, 2
	db 66h
	mov $S243_timeBuffer[si],   ax
	mov si,dx
	mov BYTE PTR _writeBuffer[bx],1

	db 66h
	mov ax, WORD PTR [SI]
	db 66h
	sub cx, ax
	xor ax, ax
	mov al, bl
	shl ax, 12
	add ax, cx
	mov dx, SEG $S244_contBuffer
	pop si
	leave
	ret

suiteCacheAddrReadM :

	db 66h
	add si, 4
	inc bl
	cmp bl,15
	jl progCacheAddrReadM
	db  66h
	mov  si, cx
	db 66h
	push cx
	call FAR PTR _BufferPosition
	add sp, 4
	db  66h
	mov cx, si              ; restaure position
	mov ax, $S245_currentBuffer
	mov bx, ax
	shl ax, 2
	lea si, $S242_posBuffer
	add si, ax              ; BufferPosition[currentBuffer]
	jmp SHORT progCacheAddrReadM

_CacheAddrReadM  ENDP

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
; CacheWrite                                ;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

	PUBLIC  _CacheWrite
_CacheWrite  PROC FAR
	enter   WORD PTR 0,0
	push    si

	DB 66h
	mov  cx, WORD PTR [bp+6]     ; position a lire
	xor  bx, bx
	lea  si, $S242_posBuffer     ; tableau posBuffer

progCacheWrite :

	db  66h
	mov ax, WORD PTR [SI]        ; debut du nieme buffer
	db  66h
	cmp ax, cx
	jg  suiteCacheWrite
	db 66h
	add ax, 4095
	dw 00h
	db 66h
	cmp ax,cx
	jl suiteCacheWrite
	db 66h
	mov ax, WORD PTR $S240_theTime
	db 66h
	inc ax
	db 66h
	mov WORD PTR $S240_theTime, ax
	mov dx,si
	mov si, bx
	shl si, 2
	db 66h
	mov $S243_timeBuffer[si],   ax
	mov BYTE PTR _writeBuffer[bx],1
	mov si,dx

	db 66h
	mov ax, WORD PTR [SI]
	db 66h
	sub cx, ax
	xor ax, ax
	mov al, bl
	shl ax, 12
	add ax, cx
	mov bx, SEG $S244_contBuffer
	mov es, bx
	mov si, ax
	mov ax, WORD PTR [bp+10]
	mov WORD PTR es:[si],ax ; on ecrit la valeur
	pop si
	leave
	ret

suiteCacheWrite :

	db 66h
	add si, 4
	inc bl
	cmp bl,15
	jl progCacheWrite
	db  66h
	mov  si, cx
	db 66h
	push cx
	call FAR PTR _BufferPosition
	add sp, 4
	db  66h
	mov cx, si              ; restaure position
	mov ax, $S245_currentBuffer
	mov bx, ax
	shl ax, 2
	lea si, $S242_posBuffer
	add si, ax              ; BufferPosition[currentBuffer]
	jmp SHORT progCacheWrite

_CacheWrite  ENDP

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
; LCacheRead                                 ;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

	PUBLIC  _LCacheRead
_LCacheRead  PROC FAR
	enter   WORD PTR 0,0
	push    si

	DB 66h
	mov  cx, WORD PTR [bp+6]     ; position a lire
	xor  bx, bx
	lea  si, $S242_posBuffer     ; tableau posBuffer

progLCacheRead :

	db  66h
	mov ax, WORD PTR [SI]        ; debut du nieme buffer
	db  66h
	cmp ax, cx
	jg  suiteLCacheRead
	db 66h
	add ax, 4095
	dw 00h
	db 66h
	cmp ax,cx
	jl suiteLCacheRead
	db 66h
	mov ax, WORD PTR $S240_theTime
	db 66h
	inc ax
	db 66h
	mov WORD PTR $S240_theTime, ax
	mov dx,si
	mov si, bx
	shl si, 2
	db 66h
	mov $S243_timeBuffer[si],   ax
	mov si,dx

	db 66h
	mov ax, WORD PTR [SI]
	db 66h
	sub cx, ax
	xor ax, ax
	mov al, bl
	shl ax, 12
	add ax, cx
	mov bx, SEG $S244_contBuffer
	mov es, bx
	mov si, ax
	mov ax, WORD PTR es:[si]
	mov dx, WORD PTR es:[si+2]
	pop si
	leave
	ret

suiteLCacheRead :

	db 66h
	add si, 4
	inc bl
	cmp bl,15
	jl progLCacheRead
	db  66h
	mov  si, cx
	db 66h
	push cx
	call FAR PTR _BufferPosition
	add sp, 4
	db  66h
	mov cx, si              ; restaure position
	mov ax, $S245_currentBuffer
	mov bx, ax
	shl ax, 2
	lea si, $S242_posBuffer
	add si, ax              ; BufferPosition[currentBuffer]
	jmp SHORT progLCacheRead

_LCacheRead  ENDP

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
; LCacheWrite                               ;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

	PUBLIC  _LCacheWrite
_LCacheWrite  PROC FAR
	enter   WORD PTR 0,0
	push    si

	DB 66h
	mov  cx, WORD PTR [bp+6]     ; position a lire
	xor  bx, bx
	lea  si, $S242_posBuffer     ; tableau posBuffer

progLCacheWrite :

	db  66h
	mov ax, WORD PTR [SI]        ; debut du nieme buffer
	db  66h
	cmp ax, cx
	jg  suiteLCacheWrite
	db 66h
	add ax, 4095
	dw 00h
	db 66h
	cmp ax,cx
	jl suiteLCacheWrite
	db 66h
	mov ax, WORD PTR $S240_theTime
	db 66h
	inc ax
	db 66h
	mov WORD PTR $S240_theTime, ax
	mov dx,si
	mov si, bx
	shl si, 2
	db 66h
	mov $S243_timeBuffer[si],   ax
	mov BYTE PTR _writeBuffer[bx],1
	mov si,dx

	db 66h
	mov ax, WORD PTR [SI]
	db 66h
	sub cx, ax
	xor ax, ax
	mov al, bl
	shl ax, 12
	add ax, cx
	mov bx, SEG $S244_contBuffer
	mov es, bx
	mov si, ax
	db 66h
	mov ax, WORD PTR [bp+10]
	db 66h
	mov WORD PTR es:[si],ax
	pop si
	leave
	ret

suiteLCacheWrite :

	db 66h
	add si, 4
	inc bl
	cmp bl,15
	jl progLCacheWrite
	db  66h
	mov  si, cx
	db 66h
	push cx
	call FAR PTR _BufferPosition
	add sp, 4
	db  66h
	mov cx, si              ; restaure position
	mov ax, $S245_currentBuffer
	mov bx, ax
	shl ax, 2
	lea si, $S242_posBuffer
	add si, ax              ; BufferPosition[currentBuffer]
	jmp SHORT progLCacheWrite

_LCacheWrite  ENDP

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
; BufferPosition                            ;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

_BufferPosition PROC FAR
	enter   WORD PTR 0,0

	push si
	lea si, word ptr $S243_timeBuffer
	mov bl, 1
	xor bh, bh
	db  66h
	mov ax, [si]

compute_min_time :

	add si, 4
	db  66h
	cmp ax, [si]
	jle suite_min_time
	mov bh, bl
	db  66h
	mov ax, [si]

suite_min_time :

	inc bl
	cmp bl, 15
	jl  compute_min_time
	mov bl, bh
	xor bh, bh
	mov $S245_currentBuffer, bx
	shl bx, 2
	lea si,word ptr $S242_posBuffer[bx]
	db  66h
	mov ax,[si]
	db  66h
	or  ax,ax
	jl  no_error
	db  66h
	cmp ax, word ptr $S241_maxpos
	jge suite_test_error
	mov bx,WORD PTR $S245_currentBuffer
	cmp BYTE PTR _writeBuffer[bx],0
	je  no_error
	push 0
	db 66h
	push ax
	push word ptr $S246_cacheFile
	call far ptr _lseek
	add  sp,8
	push 4096
	mov  bx, $S245_currentBuffer
	shl  bx, 12
	lea  ax, word ptr $S244_contBuffer[bx]
	mov  dx, SEG $S244_contBuffer
	push dx
	push ax
	push word ptr $S246_cacheFile
	call far ptr _write
	add sp,8
	inc ax
	jne no_error
	push ds
	push offset dgroup:$SG311
	call far ptr _printf
	add  sp,4
	push -1
	call far ptr _exit

suite_test_error :

	push 32
	push ds
	push offset dgroup:$SG315
	push 2
	call far ptr _write
	add  sp,8
	push 0
	call far ptr _exit

no_error :

	mov bx,WORD PTR $S245_currentBuffer
	mov BYTE PTR _writeBuffer[bx],0
	db  66h
	mov ax, word ptr [bp+6] ; position
	and ax, 0f000h
	db  66h
	mov [si], ax
	push 0
	db 66h
	push ax
	push word ptr $S246_cacheFile
	call far ptr _lseek
	add  sp, 8
	db   66h
	mov  ax, [si]
	db   66h
	cmp  ax, word ptr $S241_maxpos
	jne  neq_max
; suppression le 15/05/92 inutile
;    push 4096
;    push SEG $S244_contBuffer
;    push OFFSET $S244_contBuffer
;    push word ptr $S246_cacheFile
;    call far ptr _write
;    add  sp, 8
	db   66h
	add word ptr $S241_maxpos,4096
	dw  0h
	pop si
	leave
	ret

neq_max :

	push 4096
	mov  bx, $S245_currentBuffer
	shl  bx, 12
	lea  ax, word ptr $S244_contBuffer[bx]
	push SEG $S244_contBuffer
	push ax
	push word ptr $S246_cacheFile
	call far ptr _read
	add  sp, 8
	pop  si
	leave
	ret

_BufferPosition ENDP

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
; FreeElemAlloc                             ;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

	PUBLIC	_FreeElemAlloc
_FreeElemAlloc	PROC FAR
	enter   WORD PTR 0,0

	db  66h
	mov ax, word ptr $S248_keepElem
	db  66h
	mov dx, ax
	db  66h
	or  ax, ax
	jz  allocate
	les bx, DWORD PTR $S248_keepElem
	db  66h
	mov ax, WORD PTR es:[bx+8]
	db  66h
	mov word ptr $S248_keepElem,ax
	mov ax, dx
	db  66h
	shr dx,16
	leave
	ret

allocate :

	push 12
	call FAR PTR _malloc
	add  sp,2
	leave
	ret

_FreeElemAlloc  ENDP

MEMGES_TEXT      ENDS
CONST      SEGMENT
$T20016 DW SEG _TMP_NAME
$RR     DW OFFSET _TMP_NAME
CONST      ENDS
MEMGES_TEXT      SEGMENT
	ASSUME  CS: MEMGES_TEXT
; Line 213
	PUBLIC	_CacheInit
_CacheInit	PROC FAR
	enter	WORD PTR 2,0
	push	si
;	i = -2
; Line 215
	push	384
	push    -32510
	mov     es,$T20016
	push    es
	mov     ax,$RR
	push    ax
	call    FAR PTR _open
	add	sp,8
	mov	$S246_cacheFile,ax
; Line 216
	mov	WORD PTR [bp-2],0	;i
$FC327:
; Line 217
	mov	si,WORD PTR [bp-2]	;i
	shl	si,2
	mov	WORD PTR $S242_posBuffer[si],-4097
	mov	WORD PTR $S242_posBuffer[si+2],-1
; Line 218
	sub	ax,ax
	mov	WORD PTR $S243_timeBuffer[si+2],ax
	mov WORD PTR $S243_timeBuffer[si],ax
; Line 219
	inc	WORD PTR [bp-2]	;i
	cmp	WORD PTR [bp-2],15	;i
	jl	$FC327
; Line 220
	mov	WORD PTR $S240_theTime+2,ax
	mov	WORD PTR $S240_theTime,ax
; Line 221
	call    FAR PTR _FreeElemAlloc
	mov	WORD PTR $S247_freeList,ax
	mov	WORD PTR $S247_freeList+2,dx
; Line 222
	les	bx,DWORD PTR $S247_freeList
	sub	ax,ax
	mov	WORD PTR es:[bx+2],ax
	mov	WORD PTR es:[bx],ax
; Line 223
	les	bx,DWORD PTR $S247_freeList
	mov	WORD PTR es:[bx+4],-27008
	mov	WORD PTR es:[bx+6],152
; Line 224
	les	bx,DWORD PTR $S247_freeList
	mov	WORD PTR es:[bx+10],ax
	mov	WORD PTR es:[bx+8],ax
; Line 225
	push	1
	call    FAR PTR _CacheMalloc
	add	sp,2
; Line 226
	pop	si
	leave	
	ret	

_CacheInit	ENDP
; Line 233
	PUBLIC	_CacheEnd
_CacheEnd	PROC FAR
; Line 234
	push	WORD PTR $S246_cacheFile
	call	FAR PTR _close
	add	sp,2
; Line 235
	mov     es,$T20016
	push    es
	mov     ax,$RR
	push    ax
	call    FAR PTR _remove
	add	sp,4
; Line 236
	ret	
	nop	

_CacheEnd   ENDP

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
; CacheMalloc                               ;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

	PUBLIC	_CacheMalloc
_CacheMalloc    PROC  FAR
	enter   WORD PTR 4,0

	push si
	push di
	les si, dword ptr $S247_freeList
	mov bx, si
	mov dx, es
	db  66h
	xor ax,ax
	mov ax, word ptr [bp+6] ; size
	add ax, 2

find_free :

	mov cx,  es  ; ptFreeElem
	or  cx,  si
	jnz  fol_find_free
	xor ax,ax    ; we didn't find a free elem
	xor dx,dx
	pop di
	pop si
	leave
	ret

fol_find_free :

	db  66h
	cmp ax,  word ptr es:[si+4]  ; ptFreeElem -> size
	jle end_find_free
	mov  bx, si
	mov  dx, es
	les si,  dword ptr es:[si+8] ; ptFreeElem -> next
	jmp short find_free

end_find_free :

	mov word ptr [bp-4], bx ; ptOld
	mov word ptr [bp-2], dx
	db  66h
	mov cx, word ptr es:[si]   ; ptFreeElem -> position
	mov dx, cx
	and cx, 0f000h
	db  66h
	add cx, 4096
	dw  0h
	db  66h
	sub cx,ax
	mov bl,0   ; exit
	cmp cx, dx
	jge exit_none
	mov bl,1
	jmp short fol_exit

exit_none :

	db 66h
	mov cx, word ptr es:[si+4]  ; ptFreeElem -> size
	db 66h
	sub cx, 8                   ; - 4 * sizeof (int)
	db 66h
	cmp cx, ax
	jge not_to_small
	db 66h
	mov ax, cx
	db 66h
	add ax, 8
	dw 0h

not_to_small :

	db 66h
	push ax
	push bx
	push es

	push ax                     ; size
	db 66h
	push word ptr es:[si]       ; ptFreeElem -> position
	call far ptr _CacheWrite
	add  sp,6

	pop es
	pop bx
	db  66h
	pop ax

fol_exit :

	db  66h
	push word ptr es:[si]   ; ptFreeElem -> position
	db 66h
	cmp ax, word ptr es:[si+4] ; ptFreeElem -> size
	jz equal_size
	db 66h
	add word ptr es:[si],ax
	db 66h
	sub word ptr es:[si+4],ax
	jmp short end_cache_malloc

equal_size :

	mov cx, es
	db  66h
	shl cx, 16
	db  66h
	xor dx, dx
	mov dx, si
	db  66h
	add dx, cx
	db  66h
	cmp dx, word ptr $S247_freeList
	jnz diff_ptr
	push es
	les di, dword ptr $S247_freeList
	db  66h
	mov dx, word ptr es:[di+8]
	db  66h
	mov word ptr $S247_freeList,dx  ; freeList = freeList -> next
	db  66h
	mov ax, word ptr $S248_keepElem
	db  66h
	mov word ptr es:[di+8], ax      ; oldFreeList -> next = keepElem
	mov word ptr $S248_keepElem,di  ; keepElem = oldFreeList
	mov word ptr $S248_keepElem+2,es
	pop es
	jmp short end_cache_malloc

diff_ptr :

	push es
	db  66h
	mov dx, word ptr es:[si+8]      ; dx = ptFreeElem -> next
	les di,dword ptr [bp-4]   ; es:di = ptOld
	db  66h
	mov word ptr es:[di+8],dx         ; ptOld -> next = ptFreeElem -> next
	pop es
	db  66h
	mov cx, word ptr $S248_keepElem
	db  66h
	mov word ptr es:[si+8],cx         ; ptFreeElem -> next = keepElem
	mov word ptr $S248_keepElem,si    ; keepElem = ptFreeElem
	mov word ptr $S248_keepElem+2,es

end_cache_malloc :

	db 66h
	pop ax
	or bl,bl
	jnz end_end_cache_malloc
	db 66h
	add ax, 2
	dw  0h
	db 66h
	mov dx,ax
	db 66h
	shr dx,16
	pop di
	pop si
	leave
	ret

end_end_cache_malloc :

	push word ptr [bp+6]
	call far ptr _CacheMalloc
	add sp,2
	pop di
	pop si
	leave
	ret
_CacheMalloc    ENDP

; Line 288
	PUBLIC	_CacheFree
_CacheFree	PROC FAR
	enter	WORD PTR 16,0
; Line 289
;	position = 6
;	ptFreeElem = -8
;	ptOld = -4
;	ptNew = -16
;	size = -10
;	bind = -12
; Line 290
	push si
	db  66h
	mov ax,WORD PTR $S247_freeList
	db  66h
	mov WORD PTR [bp-8],ax  ;ptFreeElem
	db  66h
	mov	WORD PTR [bp-4],ax	;ptOld
; Line 291
	mov	WORD PTR [bp-12],0	;bind
; Line 292
	db  66h
	mov ax, word ptr [bp+6]
	db  66h
	sub ax,2
	dw  0h
	db  66h
	mov word ptr [bp+6], ax
	les si, dword ptr $S247_freeList
	mov bx, si
	mov dx, es

my_loop :

	mov cx, es
	or  cx, si
	jz  end_loop
	db  66h
	cmp ax, word ptr es:[si]
	jl  end_loop
	mov bx,si
	mov dx,es
	les si,dword ptr es:[si+8]
	jmp short my_loop

end_loop :

	mov word ptr [bp-4], bx
	mov word ptr [bp-2], dx
	mov word ptr [bp-8], si
	mov word ptr [bp-6], es

$FB359:
; Line 297
	db      66h
	push	WORD PTR [bp+6]	;position
	call    FAR PTR _CacheRead
	add	sp,4
	mov	WORD PTR [bp-10],ax	;size
; Line 299
	mov	ax,WORD PTR [bp-8]	;ptFreeElem
	mov	dx,WORD PTR [bp-6]
	cmp	WORD PTR [bp-4],ax	;ptOld
	jne	$L20027
	cmp	WORD PTR [bp-2],dx
	je	$L20028
$L20027:
	les	bx,DWORD PTR [bp-4]	;ptOld
	mov	ax,WORD PTR es:[bx+4]
	mov	dx,WORD PTR es:[bx+6]
	add	ax,WORD PTR es:[bx]
	adc	dx,WORD PTR es:[bx+2]
	cmp	dx,WORD PTR [bp+8]
	jg	$L20029
	jl	$L20028
	cmp	ax,WORD PTR [bp+6]	;position
	ja	$L20029
$L20028:
	mov	ax,WORD PTR [bp-10]	;size
	cwd	
	add	ax,WORD PTR [bp+6]	;position
	adc	dx,WORD PTR [bp+8]
	les	bx,DWORD PTR [bp-8]	;ptFreeElem
	cmp	dx,WORD PTR es:[bx+2]
	jl	$I360
	jg	$L20029
	cmp	ax,WORD PTR es:[bx]
	jbe	$I360
$L20029:
; Line 300
	push	13
	push	ds
	push	OFFSET DGROUP:$SG363
	push	2
	call	FAR PTR _write
	add	sp,8
; Line 301
	pop si
	leave	
	ret	
$I360:
	mov	ax,WORD PTR [bp-8]	;ptFreeElem
	or	ax,WORD PTR [bp-6]
	je	$I365
; Line 304
	mov	ax,WORD PTR [bp-10]	;size
	cwd	
	add	ax,WORD PTR [bp+6]	;position
	adc	dx,WORD PTR [bp+8]
	les	bx,DWORD PTR [bp-8]	;ptFreeElem
	cmp	ax,WORD PTR es:[bx]
	jne	$I365
	cmp	dx,WORD PTR es:[bx+2]
	jne	$I365
; Line 305
	mov	ax,WORD PTR [bp-10]	;size
	cwd	
	sub	WORD PTR es:[bx],ax
	sbb	WORD PTR es:[bx+2],dx
; Line 306
	mov	ax,WORD PTR [bp-10]	;size
	cwd	
	les	bx,DWORD PTR [bp-8]	;ptFreeElem
	add	WORD PTR es:[bx+4],ax
	adc	WORD PTR es:[bx+6],dx
; Line 307
	mov	WORD PTR [bp-12],1	;bind
; Line 308
; Line 309
$I365:
	les	bx,DWORD PTR [bp-4]	;ptOld
	mov	ax,WORD PTR es:[bx+4]
	mov	dx,WORD PTR es:[bx+6]
	add	ax,WORD PTR es:[bx]
	adc	dx,WORD PTR es:[bx+2]
	cmp	ax,WORD PTR [bp+6]	;position
	jne	$I366
	cmp	dx,WORD PTR [bp+8]
	jne	$I366
; Line 310
	cmp	WORD PTR [bp-12],0	;bind
	je	$I367
; Line 311
	les	bx,DWORD PTR [bp-8]	;ptFreeElem
	mov	ax,WORD PTR es:[bx+4]
	mov	dx,WORD PTR es:[bx+6]
	les	bx,DWORD PTR [bp-4]	;ptOld
	add	WORD PTR es:[bx+4],ax
	adc	WORD PTR es:[bx+6],dx
; Line 312
	les	bx,DWORD PTR [bp-8]	;ptFreeElem
	mov	ax,WORD PTR es:[bx+8]
	mov	dx,WORD PTR es:[bx+10]
	les	bx,DWORD PTR [bp-4]	;ptOld
	mov	WORD PTR es:[bx+8],ax
	mov	WORD PTR es:[bx+10],dx
; Line 313
	les	bx,DWORD PTR [bp-8]	;ptFreeElem
	mov	ax,WORD PTR $S248_keepElem
	mov	dx,WORD PTR $S248_keepElem+2
	mov	WORD PTR es:[bx+8],ax
	mov	WORD PTR es:[bx+10],dx
; Line 314
	mov	ax,WORD PTR [bp-8]	;ptFreeElem
	mov	dx,WORD PTR [bp-6]
	mov	WORD PTR $S248_keepElem,ax
	mov	WORD PTR $S248_keepElem+2,dx
; Line 315
	pop si
	leave	
	ret	
$I367:
; Line 316
	mov	ax,WORD PTR [bp-10]	;size
	cwd	
	les	bx,DWORD PTR [bp-4]	;ptOld
	add	WORD PTR es:[bx+4],ax
	adc	WORD PTR es:[bx+6],dx
; Line 317
	pop si
	leave	
	ret	
	nop	
$I366:
	cmp	WORD PTR [bp-12],0	;bind
	jne	$I371
; Line 320
	call    FAR PTR _FreeElemAlloc
	mov	WORD PTR [bp-16],ax	;ptNew
	mov	WORD PTR [bp-14],dx
; Line 321
	mov	ax,WORD PTR [bp-10]	;size
	cwd	
	les	bx,DWORD PTR [bp-16]	;ptNew
	mov	WORD PTR es:[bx+4],ax
	mov	WORD PTR es:[bx+6],dx
; Line 322
	les	bx,DWORD PTR [bp-16]	;ptNew
	mov	ax,WORD PTR [bp+6]	;position
	mov	dx,WORD PTR [bp+8]
	mov	WORD PTR es:[bx],ax
	mov	WORD PTR es:[bx+2],dx
; Line 323
	les	bx,DWORD PTR [bp-16]	;ptNew
	mov	ax,WORD PTR [bp-8]	;ptFreeElem
	mov	dx,WORD PTR [bp-6]
	mov	WORD PTR es:[bx+8],ax
	mov	WORD PTR es:[bx+10],dx
; Line 324
	mov	ax,WORD PTR [bp-8]	;ptFreeElem
	mov	dx,WORD PTR [bp-6]
	cmp	WORD PTR [bp-4],ax	;ptOld
	jne	$L20030
	cmp	WORD PTR [bp-2],dx
	je	$I370
$L20030:
; Line 325
	les	bx,DWORD PTR [bp-4]	;ptOld
	mov	ax,WORD PTR [bp-16]	;ptNew
	mov	dx,WORD PTR [bp-14]
	mov	WORD PTR es:[bx+8],ax
	mov	WORD PTR es:[bx+10],dx
; Line 326
	pop si
	leave	
	ret	
	nop	
$I370:
; Line 327
	mov	ax,WORD PTR [bp-16]	;ptNew
	mov	dx,WORD PTR [bp-14]
	mov	WORD PTR $S247_freeList,ax
	mov	WORD PTR $S247_freeList+2,dx
$I371:
; Line 328
; Line 329
	pop si
	leave	
	ret	
	nop	

_CacheFree	ENDP
MEMGES_TEXT	ENDS
END
