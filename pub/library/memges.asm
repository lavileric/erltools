;	Static Name Aliases
;
;	$S449_theTime	EQU	theTime
;	$S450_maxpos	EQU	maxpos
;	$S451_posBuffer	EQU	posBuffer
;	$S452_timeBuffer	EQU	timeBuffer
;	$S453_writeBuffer	EQU	writeBuffer
;	$S454_contBuffer	EQU	contBuffer
;	$S455_currentBuffer	EQU	currentBuffer
;	$S456_cacheFile	EQU	cacheFile
;	$S457_freeList	EQU	freeList
;	$S458_keepElem	EQU	keepElem
	TITLE   memges.c
	.286p
	.287
INCLUDELIB	LLIBCE
MEMGES	SEGMENT  WORD PUBLIC 'CODE'
MEMGES	ENDS
_DATA	SEGMENT  WORD PUBLIC 'DATA'
_DATA	ENDS
CONST	SEGMENT  WORD PUBLIC 'CONST'
CONST	ENDS
_BSS	SEGMENT  WORD PUBLIC 'BSS'
_BSS	ENDS
MEMGES5_DATA	SEGMENT  PARA PUBLIC 'FAR_DATA'
MEMGES5_DATA	ENDS
DGROUP	GROUP	CONST, _BSS, _DATA
	ASSUME DS: DGROUP, SS: DGROUP
EXTRN	_exit:FAR
EXTRN	__aFchkstk:FAR
EXTRN	_malloc:FAR
EXTRN	_printf:FAR
EXTRN	_close:FAR
EXTRN	_lseek:FAR
EXTRN	_open:FAR
EXTRN	__aFldiv:FAR
EXTRN	_read:FAR
EXTRN	_remove:FAR
EXTRN	_write:FAR
EXTRN	_TMP_NAME:DWORD
_DATA      SEGMENT
	ORG	$+14
$SG522	DB	'File system is full ',  0aH,  00H
$SG526	DB	' Illegal access to file system ',  0aH,  00H
$SG528	DB	' Illegal read for  file system ',  0aH,  00H
$SG574	DB	'double free ',  0aH,  00H
	ORG	$-116
$S450_maxpos	DD	00H
$S455_currentBuffer	DW	00H
$S457_freeList	DD	00H
$S458_keepElem	DD	00H
_DATA      ENDS
_BSS      SEGMENT
$S449_theTime	DW 02H DUP (?)
	ORG	$+18
$S451_posBuffer	DW 01eH DUP (?)
$S452_timeBuffer	DW 01eH DUP (?)
	ORG	$-138
$S453_writeBuffer	DB 0fH DUP (?)
_BSS      ENDS
MEMGES5_DATA      SEGMENT
$S454_contBuffer	DW 07800H DUP (?)
MEMGES5_DATA      ENDS
_BSS      SEGMENT
	ORG	$+1
$S456_cacheFile	DW 01H DUP (?)
_BSS      ENDS
MEMGES      SEGMENT
	ASSUME	CS: MEMGES
; Line 1
; Line 9
; Line 10
; Line 11
; Line 12
; Line 13
; Line 14
; Line 15
; Line 5
; Line 6
; Line 9
; Line 17
; Line 45
MEMGES      ENDS
CONST      SEGMENT
$T20003	DW SEG $S454_contBuffer 
CONST      ENDS
MEMGES      SEGMENT
	ASSUME	CS: MEMGES
	PUBLIC	_CacheRead
_CacheRead	PROC FAR
	push	bp
	mov	bp,sp
	mov	ax,10
	call	FAR PTR __aFchkstk
;	cache = -2
;	cachePosition = -6
;	ret = -10
;	position = 6
; Line 47
	mov	WORD PTR [bp-2],0	;cache
; Line 50
	jmp	SHORT $F464
; Line 57
; Line 58
$FC465:
	inc	WORD PTR [bp-2]	;cache
$F464:
	cmp	WORD PTR [bp-2],15	;cache
	jge	$FB466
; Line 51
$deb467:
; Line 53
	mov	bx,WORD PTR [bp-2]	;cache
	shl	bx,2
	mov	ax,WORD PTR $S451_posBuffer[bx]
	mov	dx,WORD PTR $S451_posBuffer[bx+2]
	mov	WORD PTR [bp-6],ax	;cachePosition
	cmp	dx,WORD PTR [bp+8]
	jg	$FC465
	jl	$L20001
	cmp	ax,WORD PTR [bp+6]	;position
	ja	$FC465
$L20001:
	add	ax,4095
	adc	dx,0
	cmp	dx,WORD PTR [bp+8]
	jl	$FC465
	jg	$L20002
	cmp	ax,WORD PTR [bp+6]	;position
	jb	$FC465
$L20002:
; Line 55
	mov	ax,WORD PTR $S449_theTime
	mov	dx,WORD PTR $S449_theTime+2
	add	WORD PTR $S449_theTime,1
	adc	WORD PTR $S449_theTime+2,0
	mov	WORD PTR $S452_timeBuffer[bx],ax
	mov	WORD PTR $S452_timeBuffer[bx+2],dx
; Line 56
	mov	bh,BYTE PTR [bp-2]	;cache
	shl	bh,4
	sub	bl,bl
	sub	bx,WORD PTR [bp-6]	;cachePosition
	add	bx,WORD PTR [bp+6]	;position
	add	bx,OFFSET $S454_contBuffer
	mov	es,WORD PTR $T20003
	mov	ax,WORD PTR es:[bx]
	leave	
	ret	
$FB466:
; Line 59
	push	WORD PTR [bp+8]
	push	WORD PTR [bp+6]	;position
	push	cs
	call	NEAR PTR _BufferPosition
	add	sp,4
; Line 60
	mov	ax,WORD PTR $S455_currentBuffer
	mov	WORD PTR [bp-2],ax	;cache
; Line 61
	jmp	SHORT $deb467
; Line 62
	nop	

_CacheRead	ENDP
; Line 69
	PUBLIC	_CacheAddrRead
_CacheAddrRead	PROC FAR
	push	bp
	mov	bp,sp
	mov	ax,6
	call	FAR PTR __aFchkstk
;	cache = -2
;	cachePosition = -6
;	position = 6
; Line 73
	mov	WORD PTR [bp-2],0	;cache
	jmp	SHORT $F474
; Line 79
; Line 80
$FC475:
	inc	WORD PTR [bp-2]	;cache
$F474:
	cmp	WORD PTR [bp-2],15	;cache
	jge	$FB476
; Line 74
$deb477:
; Line 76
	mov	bx,WORD PTR [bp-2]	;cache
	shl	bx,2
	mov	ax,WORD PTR $S451_posBuffer[bx]
	mov	dx,WORD PTR $S451_posBuffer[bx+2]
	mov	WORD PTR [bp-6],ax	;cachePosition
	cmp	dx,WORD PTR [bp+8]
	jg	$FC475
	jl	$L20004
	cmp	ax,WORD PTR [bp+6]	;position
	ja	$FC475
$L20004:
	add	ax,4095
	adc	dx,0
	cmp	dx,WORD PTR [bp+8]
	jl	$FC475
	jg	$L20005
	cmp	ax,WORD PTR [bp+6]	;position
	jb	$FC475
$L20005:
; Line 77
	mov	ax,WORD PTR $S449_theTime
	mov	dx,WORD PTR $S449_theTime+2
	add	WORD PTR $S449_theTime,1
	adc	WORD PTR $S449_theTime+2,0
	mov	WORD PTR $S452_timeBuffer[bx],ax
	mov	WORD PTR $S452_timeBuffer[bx+2],dx
; Line 78
	mov	ah,BYTE PTR [bp-2]	;cache
	shl	ah,4
	sub	al,al
	sub	ax,WORD PTR [bp-6]	;cachePosition
	add	ax,WORD PTR [bp+6]	;position
	add	ax,OFFSET $S454_contBuffer
	mov	dx,SEG $S454_contBuffer
	leave	
	ret	
	nop	
$FB476:
; Line 81
	push	WORD PTR [bp+8]
	push	WORD PTR [bp+6]	;position
	push	cs
	call	NEAR PTR _BufferPosition
	add	sp,4
; Line 82
	mov	ax,WORD PTR $S455_currentBuffer
	mov	WORD PTR [bp-2],ax	;cache
; Line 83
	jmp	SHORT $deb477
; Line 84
	nop	

_CacheAddrRead	ENDP
; Line 91
	PUBLIC	_CacheWrite
_CacheWrite	PROC FAR
	push	bp
	mov	bp,sp
	mov	ax,10
	call	FAR PTR __aFchkstk
;	cache = -6
;	pos = -4
;	cachePosition = -10
;	value = 10
;	position = 6
; Line 96
	mov	WORD PTR [bp-6],0	;cache
	jmp	SHORT $F485
; Line 105
; Line 106
$FC486:
	inc	WORD PTR [bp-6]	;cache
$F485:
	cmp	WORD PTR [bp-6],15	;cache
	jge	$FB487
; Line 97
$deb488:
; Line 99
	mov	bx,WORD PTR [bp-6]	;cache
	shl	bx,2
	mov	ax,WORD PTR $S451_posBuffer[bx]
	mov	dx,WORD PTR $S451_posBuffer[bx+2]
	mov	WORD PTR [bp-10],ax	;cachePosition
	cmp	dx,WORD PTR [bp+8]
	jg	$FC486
	jl	$L20006
	cmp	ax,WORD PTR [bp+6]	;position
	ja	$FC486
$L20006:
	add	ax,4095
	adc	dx,0
	cmp	dx,WORD PTR [bp+8]
	jl	$FC486
	jg	$L20007
	cmp	ax,WORD PTR [bp+6]	;position
	jb	$FC486
$L20007:
; Line 101
	mov	ax,WORD PTR $S449_theTime
	mov	dx,WORD PTR $S449_theTime+2
	add	WORD PTR $S449_theTime,1
	adc	WORD PTR $S449_theTime+2,0
	mov	WORD PTR $S452_timeBuffer[bx],ax
	mov	WORD PTR $S452_timeBuffer[bx+2],dx
; Line 102
	mov	bx,WORD PTR [bp-6]	;cache
	mov	BYTE PTR $S453_writeBuffer[bx],1
; Line 103
	mov	ax,WORD PTR [bp+10]	;value
	mov	bh,bl
	shl	bh,4
	sub	bl,bl
	sub	bx,WORD PTR [bp-10]	;cachePosition
	add	bx,WORD PTR [bp+6]	;position
	add	bx,OFFSET $S454_contBuffer
	mov	es,WORD PTR $T20003
	mov	WORD PTR es:[bx],ax
; Line 104
	leave	
	ret	
$FB487:
; Line 107
	push	WORD PTR [bp+8]
	push	WORD PTR [bp+6]	;position
	push	cs
	call	NEAR PTR _BufferPosition
	add	sp,4
; Line 108
	mov	ax,WORD PTR $S455_currentBuffer
	mov	WORD PTR [bp-6],ax	;cache
; Line 109
	jmp	$deb488
; Line 110

_CacheWrite	ENDP
; Line 117
	PUBLIC	_LCacheRead
_LCacheRead	PROC FAR
	push	bp
	mov	bp,sp
	mov	ax,10
	call	FAR PTR __aFchkstk
;	cache = -6
;	cachePosition = -10
;	pos = -4
;	position = 6
; Line 122
	mov	WORD PTR [bp-6],0	;cache
	jmp	SHORT $F495
; Line 129
; Line 130
$FC496:
	inc	WORD PTR [bp-6]	;cache
$F495:
	cmp	WORD PTR [bp-6],15	;cache
	jge	$FB497
; Line 123
$deb498:
; Line 125
	mov	bx,WORD PTR [bp-6]	;cache
	shl	bx,2
	mov	ax,WORD PTR $S451_posBuffer[bx]
	mov	dx,WORD PTR $S451_posBuffer[bx+2]
	mov	WORD PTR [bp-10],ax	;cachePosition
	cmp	dx,WORD PTR [bp+8]
	jg	$FC496
	jl	$L20008
	cmp	ax,WORD PTR [bp+6]	;position
	ja	$FC496
$L20008:
	add	ax,4095
	adc	dx,0
	cmp	dx,WORD PTR [bp+8]
	jl	$FC496
	jg	$L20009
	cmp	ax,WORD PTR [bp+6]	;position
	jb	$FC496
$L20009:
; Line 126
	mov	ax,WORD PTR $S449_theTime
	mov	dx,WORD PTR $S449_theTime+2
	add	WORD PTR $S449_theTime,1
	adc	WORD PTR $S449_theTime+2,0
	mov	WORD PTR $S452_timeBuffer[bx],ax
	mov	WORD PTR $S452_timeBuffer[bx+2],dx
; Line 127
	mov	ah,BYTE PTR [bp-6]	;cache
	shl	ah,4
	sub	al,al
	sub	ax,WORD PTR [bp-10]	;cachePosition
	add	ax,WORD PTR [bp+6]	;position
	add	ax,OFFSET $S454_contBuffer
	mov	cx,SEG $S454_contBuffer
; Line 128
	mov	es,cx
	mov	bx,ax
	mov	ax,WORD PTR es:[bx]
	mov	dx,WORD PTR es:[bx+2]
	leave	
	ret	
$FB497:
; Line 131
	push	WORD PTR [bp+8]
	push	WORD PTR [bp+6]	;position
	push	cs
	call	NEAR PTR _BufferPosition
	add	sp,4
; Line 132
	mov	ax,WORD PTR $S455_currentBuffer
	mov	WORD PTR [bp-6],ax	;cache
; Line 133
	jmp	SHORT $deb498
; Line 134
	nop	

_LCacheRead	ENDP
; Line 141
	PUBLIC	_LCacheWrite
_LCacheWrite	PROC FAR
	push	bp
	mov	bp,sp
	mov	ax,10
	call	FAR PTR __aFchkstk
;	cache = -6
;	cachePosition = -10
;	pos = -4
;	value = 10
;	position = 6
; Line 146
	mov	WORD PTR [bp-6],0	;cache
	jmp	SHORT $F506
; Line 155
; Line 156
$FC507:
	inc	WORD PTR [bp-6]	;cache
$F506:
	cmp	WORD PTR [bp-6],15	;cache
	jge	$FB508
; Line 147
$deb509:
; Line 149
	mov	bx,WORD PTR [bp-6]	;cache
	shl	bx,2
	mov	ax,WORD PTR $S451_posBuffer[bx]
	mov	dx,WORD PTR $S451_posBuffer[bx+2]
	mov	WORD PTR [bp-10],ax	;cachePosition
	cmp	dx,WORD PTR [bp+8]
	jg	$FC507
	jl	$L20010
	cmp	ax,WORD PTR [bp+6]	;position
	ja	$FC507
$L20010:
	add	ax,4095
	adc	dx,0
	cmp	dx,WORD PTR [bp+8]
	jl	$FC507
	jg	$L20011
	cmp	ax,WORD PTR [bp+6]	;position
	jb	$FC507
$L20011:
; Line 151
	mov	ax,WORD PTR $S449_theTime
	mov	dx,WORD PTR $S449_theTime+2
	add	WORD PTR $S449_theTime,1
	adc	WORD PTR $S449_theTime+2,0
	mov	WORD PTR $S452_timeBuffer[bx],ax
	mov	WORD PTR $S452_timeBuffer[bx+2],dx
; Line 152
	mov	bx,WORD PTR [bp-6]	;cache
	mov	BYTE PTR $S453_writeBuffer[bx],1
; Line 153
	mov	ax,WORD PTR [bp+10]	;value
	mov	dx,WORD PTR [bp+12]
	mov	bh,bl
	shl	bh,4
	sub	bl,bl
	sub	bx,WORD PTR [bp-10]	;cachePosition
	add	bx,WORD PTR [bp+6]	;position
	add	bx,OFFSET $S454_contBuffer
	mov	es,WORD PTR $T20003
	mov	WORD PTR es:[bx],ax
	mov	WORD PTR es:[bx+2],dx
; Line 154
	leave	
	ret	
	nop	
$FB508:
; Line 157
	push	WORD PTR [bp+8]
	push	WORD PTR [bp+6]	;position
	push	cs
	call	NEAR PTR _BufferPosition
	add	sp,4
; Line 158
	mov	ax,WORD PTR $S455_currentBuffer
	mov	WORD PTR [bp-6],ax	;cache
; Line 159
	jmp	$deb509
; Line 160

_LCacheWrite	ENDP
; Line 167
	PUBLIC	_BufferPosition
_BufferPosition	PROC FAR
	push	bp
	mov	bp,sp
	mov	ax,6
	call	FAR PTR __aFchkstk
;	i = -6
;	min = -4
;	position = 6
; Line 170
	mov	ax,WORD PTR $S452_timeBuffer
	mov	dx,WORD PTR $S452_timeBuffer+2
	mov	WORD PTR [bp-4],ax	;min
	mov	WORD PTR [bp-2],dx
; Line 171
	mov	WORD PTR $S455_currentBuffer,0
; Line 172
	mov	WORD PTR [bp-6],1	;i
$FC516:
; Line 173
	mov	ax,WORD PTR [bp-4]	;min
	mov	dx,WORD PTR [bp-2]
	mov	bx,WORD PTR [bp-6]	;i
	shl	bx,2
	cmp	WORD PTR $S452_timeBuffer[bx+2],dx
	jg	$I518
	jl	$L20013
	cmp	WORD PTR $S452_timeBuffer[bx],ax
	jae	$I518
$L20013:
; Line 174
	mov	ax,WORD PTR $S452_timeBuffer[bx]
	mov	dx,WORD PTR $S452_timeBuffer[bx+2]
	mov	WORD PTR [bp-4],ax	;min
	mov	WORD PTR [bp-2],dx
; Line 175
	mov	ax,WORD PTR [bp-6]	;i
	mov	WORD PTR $S455_currentBuffer,ax
; Line 176
; Line 177
$I518:
	inc	WORD PTR [bp-6]	;i
	cmp	WORD PTR [bp-6],15	;i
	jl	$FC516
	mov	bx,WORD PTR $S455_currentBuffer
	cmp	BYTE PTR $S453_writeBuffer[bx],0
	jne	$JCC869
	jmp	$I525
$JCC869:
; Line 179
	shl	bx,2
	cmp	WORD PTR $S451_posBuffer[bx+2],0
	jl	$I520
	mov	ax,WORD PTR $S450_maxpos
	mov	dx,WORD PTR $S450_maxpos+2
	cmp	WORD PTR $S451_posBuffer[bx+2],dx
	jg	$I520
	jl	$L20014
	cmp	WORD PTR $S451_posBuffer[bx],ax
	jae	$I520
$L20014:
; Line 180
	push	0
	push	WORD PTR $S451_posBuffer[bx+2]
	push	WORD PTR $S451_posBuffer[bx]
	push	WORD PTR $S456_cacheFile
	call	FAR PTR _lseek
	add	sp,8
; Line 181
	push	4096
	mov	ah,BYTE PTR $S455_currentBuffer
	shl	ah,4
	sub	al,al
	add	ax,OFFSET $S454_contBuffer
	push	SEG $S454_contBuffer
	push	ax
	push	WORD PTR $S456_cacheFile
	call	FAR PTR _write
	add	sp,8
	inc	ax
	jne	$I525
; Line 182
	push	ds
	push	OFFSET DGROUP:$SG522
	call	FAR PTR _printf
	add	sp,4
; Line 183
	push	-1
	jmp	SHORT $L20038
	nop	
$I520:
	mov	ax,WORD PTR $S450_maxpos
	mov	dx,WORD PTR $S450_maxpos+2
	mov	bx,WORD PTR $S455_currentBuffer
	shl	bx,2
	cmp	WORD PTR $S451_posBuffer[bx+2],dx
	jl	$I525
	jg	$L20015
	cmp	WORD PTR $S451_posBuffer[bx],ax
	jb	$I525
$L20015:
; Line 186
	push	32
	push	ds
	push	OFFSET DGROUP:$SG526
	push	2
	call	FAR PTR _write
	add	sp,8
; Line 187
	push	0
$L20038:
	call	FAR PTR _exit
	add	sp,2
; Line 188
; Line 189
$I525:
; Line 191
	push	0
	push	4096
	push	WORD PTR [bp+8]
	push	WORD PTR [bp+6]	;position
	call	FAR PTR __aFldiv
	mov	dh,dl
	mov	dl,ah
	mov	ah,al
	sub	al,al
	shl	ax,1
	rcl	dx,1
	shl	ax,1
	rcl	dx,1
	shl	ax,1
	rcl	dx,1
	shl	ax,1
	rcl	dx,1
	mov	bx,WORD PTR $S455_currentBuffer
	shl	bx,2
	mov	WORD PTR $S451_posBuffer[bx],ax
	mov	WORD PTR $S451_posBuffer[bx+2],dx
	cmp	dx,WORD PTR $S450_maxpos+2
	jl	$I527
	jg	$L20016
	cmp	ax,WORD PTR $S450_maxpos
	jbe	$I527
$L20016:
; Line 192
	push	32
	push	ds
	push	OFFSET DGROUP:$SG528
	push	2
	call	FAR PTR _write
	add	sp,8
; Line 193
	push	0
	call	FAR PTR _exit
	add	sp,2
; Line 194
; Line 195
$I527:
	push	0
	mov	bx,WORD PTR $S455_currentBuffer
	shl	bx,2
	push	WORD PTR $S451_posBuffer[bx+2]
	push	WORD PTR $S451_posBuffer[bx]
	push	WORD PTR $S456_cacheFile
	call	FAR PTR _lseek
	add	sp,8
; Line 196
	mov	ax,WORD PTR $S450_maxpos
	mov	dx,WORD PTR $S450_maxpos+2
	mov	bx,WORD PTR $S455_currentBuffer
	shl	bx,2
	cmp	WORD PTR $S451_posBuffer[bx],ax
	jne	$I529
	cmp	WORD PTR $S451_posBuffer[bx+2],dx
	jne	$I529
; Line 197
	push	4096
	push	SEG $S454_contBuffer
	push	OFFSET $S454_contBuffer
	push	WORD PTR $S456_cacheFile
	call	FAR PTR _write
	add	sp,8
; Line 198
	mov	bx,WORD PTR $S455_currentBuffer
	mov	BYTE PTR $S453_writeBuffer[bx],0
; Line 199
	add	WORD PTR $S450_maxpos,4096
	adc	WORD PTR $S450_maxpos+2,0
; Line 200
	leave	
	ret	
	nop	
$I529:
; Line 201
	push	4096
	mov	ah,BYTE PTR $S455_currentBuffer
	shl	ah,4
	sub	al,al
	add	ax,OFFSET $S454_contBuffer
	push	SEG $S454_contBuffer
	push	ax
	push	WORD PTR $S456_cacheFile
	call	FAR PTR _read
; Line 202
	leave	
	ret	

_BufferPosition	ENDP
; Line 209
	PUBLIC	_FreeElemAlloc
_FreeElemAlloc	PROC FAR
	push	bp
	mov	bp,sp
	mov	ax,4
	call	FAR PTR __aFchkstk
;	ret = -4
; Line 211
	mov	ax,WORD PTR $S458_keepElem+2
	or	ax,WORD PTR $S458_keepElem
	je	$I534
; Line 212
	mov	ax,WORD PTR $S458_keepElem
	mov	dx,WORD PTR $S458_keepElem+2
	mov	WORD PTR [bp-4],ax	;ret
	mov	WORD PTR [bp-2],dx
; Line 213
	mov	es,dx
	mov	bx,ax
	mov	ax,WORD PTR es:[bx+8]
	mov	dx,WORD PTR es:[bx+10]
	mov	WORD PTR $S458_keepElem,ax
	mov	WORD PTR $S458_keepElem+2,dx
; Line 214
	jmp	SHORT $I535
$I534:
; Line 215
	push	12
	call	FAR PTR _malloc
	mov	WORD PTR [bp-4],ax	;ret
	mov	WORD PTR [bp-2],dx
$I535:
; Line 216
	mov	ax,WORD PTR [bp-4]	;ret
	mov	dx,WORD PTR [bp-2]
; Line 217
	leave	
	ret	
	nop	

_FreeElemAlloc	ENDP
; Line 224
MEMGES      ENDS
CONST      SEGMENT
$T20018	DW SEG _TMP_NAME 
CONST      ENDS
MEMGES      SEGMENT
	ASSUME	CS: MEMGES
	PUBLIC	_CacheInit
_CacheInit	PROC FAR
	push	bp
	mov	bp,sp
	mov	ax,2
	call	FAR PTR __aFchkstk
;	i = -2
; Line 226
	push	384
	push	-32510
	mov	es,WORD PTR $T20018
	push	WORD PTR es:_TMP_NAME+2
	push	WORD PTR es:_TMP_NAME
	call	FAR PTR _open
	add	sp,8
	mov	WORD PTR $S456_cacheFile,ax
; Line 227
	mov	WORD PTR [bp-2],0	;i
$FC539:
; Line 228
	mov	bx,WORD PTR [bp-2]	;i
	shl	bx,2
	mov	WORD PTR $S451_posBuffer[bx],-4097
	mov	WORD PTR $S451_posBuffer[bx+2],-1
; Line 229
	sub	ax,ax
	mov	WORD PTR $S452_timeBuffer[bx+2],ax
	mov	WORD PTR $S452_timeBuffer[bx],ax
; Line 230
	mov	bx,WORD PTR [bp-2]	;i
	mov	BYTE PTR $S453_writeBuffer[bx],0
; Line 231
	inc	WORD PTR [bp-2]	;i
	cmp	WORD PTR [bp-2],15	;i
	jl	$FC539
; Line 232
	mov	WORD PTR $S449_theTime+2,ax
	mov	WORD PTR $S449_theTime,ax
; Line 233
	push	cs
	call	NEAR PTR _FreeElemAlloc
	mov	WORD PTR $S457_freeList,ax
	mov	WORD PTR $S457_freeList+2,dx
; Line 234
	les	bx,DWORD PTR $S457_freeList
	sub	ax,ax
	mov	WORD PTR es:[bx+2],ax
	mov	WORD PTR es:[bx],ax
; Line 235
	les	bx,DWORD PTR $S457_freeList
	mov	WORD PTR es:[bx+4],-27008
	mov	WORD PTR es:[bx+6],152
; Line 236
	les	bx,DWORD PTR $S457_freeList
	mov	WORD PTR es:[bx+10],ax
	mov	WORD PTR es:[bx+8],ax
; Line 237
	push	1
	push	cs
	call	NEAR PTR _CacheMalloc
; Line 238
	leave	
	ret	

_CacheInit	ENDP
; Line 245
	PUBLIC	_CacheEnd
_CacheEnd	PROC FAR
	xor	ax,ax
	call	FAR PTR __aFchkstk
; Line 246
	push	WORD PTR $S456_cacheFile
	call	FAR PTR _close
	add	sp,2
; Line 247
	mov	es,WORD PTR $T20018
	push	WORD PTR es:_TMP_NAME+2
	push	WORD PTR es:_TMP_NAME
	call	FAR PTR _remove
	add	sp,4
; Line 248
	ret	

_CacheEnd	ENDP
; Line 255
	PUBLIC	_CacheMalloc
_CacheMalloc	PROC FAR
	push	bp
	mov	bp,sp
	mov	ax,14
	call	FAR PTR __aFchkstk
	push	di
	push	si
;	ptFreeElem = -8
;	ptOld = -4
;	exit = -10
;	ret = -14
;	size = 6
; Line 258
	mov	ax,WORD PTR $S457_freeList
	mov	dx,WORD PTR $S457_freeList+2
	mov	WORD PTR [bp-8],ax	;ptFreeElem
	mov	WORD PTR [bp-6],dx
	mov	WORD PTR [bp-4],ax	;ptOld
	mov	WORD PTR [bp-2],dx
; Line 259
	mov	WORD PTR [bp-10],0	;exit
; Line 261
	add	WORD PTR [bp+6],2	;size
; Line 262
$FC550:
	mov	ax,dx
	or	ax,WORD PTR [bp-8]	;ptFreeElem
	je	$FB551
	mov	ax,WORD PTR [bp+6]	;size
	cwd	
	les	bx,DWORD PTR [bp-8]	;ptFreeElem
	cmp	WORD PTR es:[bx+6],dx
	jg	$FB551
	jl	$L20020
	cmp	WORD PTR es:[bx+4],ax
	jae	$FB551
$L20020:
; Line 263
	mov	WORD PTR [bp-4],bx	;ptOld
	mov	WORD PTR [bp-2],es
; Line 264
	mov	ax,WORD PTR es:[bx+8]
	mov	dx,WORD PTR es:[bx+10]
	mov	WORD PTR [bp-8],ax	;ptFreeElem
	mov	WORD PTR [bp-6],dx
; Line 265
	jmp	SHORT $FC550
	nop	
$FB551:
; Line 266
	mov	ax,WORD PTR [bp-6]
	or	ax,WORD PTR [bp-8]	;ptFreeElem
	jne	$I552
	sub	ax,ax
	cwd	
	pop	si
	pop	di
	leave	
	ret	
; Line 267
	nop	
$I552:
; Line 268
	push	0
	push	4096
	les	bx,DWORD PTR [bp-8]	;ptFreeElem
	mov	ax,WORD PTR es:[bx]
	mov	dx,WORD PTR es:[bx+2]
	mov	WORD PTR [bp-14],ax	;ret
	mov	WORD PTR [bp-12],dx
	push	dx
	push	ax
	call	FAR PTR __aFldiv
	mov	cx,ax
	mov	ax,WORD PTR [bp+6]	;size
	mov	bx,dx
	cwd	
	add	ax,WORD PTR [bp-14]	;ret
	adc	dx,WORD PTR [bp-12]
	mov	si,ax
	mov	di,dx
	mov	ax,cx
	mov	dx,bx
	add	ax,1
	adc	dx,0
	mov	dh,dl
	mov	dl,ah
	mov	ah,al
	sub	al,al
	shl	ax,1
	rcl	dx,1
	shl	ax,1
	rcl	dx,1
	shl	ax,1
	rcl	dx,1
	shl	ax,1
	rcl	dx,1
	cmp	dx,di
	jg	$I553
	jl	$L20027
	cmp	ax,si
	jae	$I553
$L20027:
; Line 269
	mov	WORD PTR [bp-10],1	;exit
; Line 270
	jmp	SHORT $I554
	nop	
$I553:
; Line 271
	mov	ax,WORD PTR [bp+6]	;size
	add	ax,8
	cwd	
	les	bx,DWORD PTR [bp-8]	;ptFreeElem
	cmp	WORD PTR es:[bx+6],dx
	jg	$I555
	jl	$L20028
	cmp	WORD PTR es:[bx+4],ax
	jae	$I555
$L20028:
; Line 272
	mov	ax,WORD PTR es:[bx+4]
	mov	WORD PTR [bp+6],ax	;size
; Line 273
$I555:
	push	WORD PTR [bp+6]	;size
	push	WORD PTR [bp-12]
	push	WORD PTR [bp-14]	;ret
	push	cs
	call	NEAR PTR _CacheWrite
	add	sp,6
; Line 274
$I554:
; Line 275
	add	WORD PTR [bp-14],2	;ret
	adc	WORD PTR [bp-12],0
; Line 276
	mov	ax,WORD PTR [bp+6]	;size
	cwd	
	les	bx,DWORD PTR [bp-8]	;ptFreeElem
	cmp	WORD PTR es:[bx+4],ax
	jne	$L20029
	cmp	WORD PTR es:[bx+6],dx
	je	$I556
$L20029:
; Line 277
	add	WORD PTR es:[bx],ax
	adc	WORD PTR es:[bx+2],dx
; Line 278
	sub	WORD PTR es:[bx+4],ax
	sbb	WORD PTR es:[bx+6],dx
; Line 279
	jmp	SHORT $I557
	nop	
$I556:
; Line 280
	mov	ax,bx
	mov	dx,es
	cmp	WORD PTR [bp-4],ax	;ptOld
	jne	$I558
	cmp	WORD PTR [bp-2],dx
	jne	$I558
; Line 281
	les	bx,DWORD PTR $S457_freeList
	mov	ax,WORD PTR es:[bx+8]
	mov	dx,WORD PTR es:[bx+10]
	mov	WORD PTR $S457_freeList,ax
	mov	WORD PTR $S457_freeList+2,dx
; Line 282
	mov	ax,WORD PTR $S458_keepElem
	mov	dx,WORD PTR $S458_keepElem+2
	les	bx,DWORD PTR [bp-4]	;ptOld
	jmp	SHORT $L20040
	nop	
$I558:
; Line 285
	mov	ax,WORD PTR es:[bx+8]
	mov	dx,WORD PTR es:[bx+10]
	les	si,DWORD PTR [bp-4]	;ptOld
	mov	WORD PTR es:[si+8],ax
	mov	WORD PTR es:[si+10],dx
; Line 286
	mov	ax,WORD PTR $S458_keepElem
	mov	dx,WORD PTR $S458_keepElem+2
	les	bx,DWORD PTR [bp-8]	;ptFreeElem
$L20040:
	mov	WORD PTR es:[bx+8],ax
	mov	WORD PTR es:[bx+10],dx
; Line 287
	mov	WORD PTR $S458_keepElem,bx
	mov	WORD PTR $S458_keepElem+2,es
; Line 288
; Line 289
$I557:
; Line 290
	cmp	WORD PTR [bp-10],0	;exit
	jne	$I560
; Line 291
	mov	ax,WORD PTR [bp-14]	;ret
	mov	dx,WORD PTR [bp-12]
	pop	si
	pop	di
	leave	
	ret	
; Line 292
	nop	
$I560:
	push	WORD PTR [bp+6]	;size
	push	cs
	call	NEAR PTR _CacheMalloc
	add	sp,2
; Line 293
	pop	si
	pop	di
	leave	
	ret	

_CacheMalloc	ENDP
; Line 300
	PUBLIC	_CacheFree
_CacheFree	PROC FAR
	push	bp
	mov	bp,sp
	mov	ax,16
	call	FAR PTR __aFchkstk
	push	si
;	ptFreeElem = -8
;	ptOld = -4
;	ptNew = -16
;	size = -10
;	bind = -12
;	position = 6
; Line 302
	mov	ax,WORD PTR $S457_freeList
	mov	dx,WORD PTR $S457_freeList+2
	mov	WORD PTR [bp-8],ax	;ptFreeElem
	mov	WORD PTR [bp-6],dx
	mov	WORD PTR [bp-4],ax	;ptOld
	mov	WORD PTR [bp-2],dx
; Line 303
	mov	WORD PTR [bp-12],0	;bind
; Line 304
	sub	WORD PTR [bp+6],2	;position
	sbb	WORD PTR [bp+8],0
; Line 305
$FC569:
	mov	ax,dx
	or	ax,WORD PTR [bp-8]	;ptFreeElem
	je	$FB570
	mov	ax,WORD PTR [bp+6]	;position
	mov	dx,WORD PTR [bp+8]
	les	bx,DWORD PTR [bp-8]	;ptFreeElem
	cmp	WORD PTR es:[bx+2],dx
	jg	$FB570
	jl	$L20031
	cmp	WORD PTR es:[bx],ax
	ja	$FB570
$L20031:
; Line 306
	mov	WORD PTR [bp-4],bx	;ptOld
	mov	WORD PTR [bp-2],es
; Line 307
	mov	ax,WORD PTR es:[bx+8]
	mov	dx,WORD PTR es:[bx+10]
	mov	WORD PTR [bp-8],ax	;ptFreeElem
	mov	WORD PTR [bp-6],dx
; Line 308
	jmp	SHORT $FC569
	nop	
$FB570:
; Line 309
	push	WORD PTR [bp+8]
	push	WORD PTR [bp+6]	;position
	push	cs
	call	NEAR PTR _CacheRead
	add	sp,4
	mov	WORD PTR [bp-10],ax	;size
; Line 311
	mov	ax,WORD PTR [bp-8]	;ptFreeElem
	mov	dx,WORD PTR [bp-6]
	cmp	WORD PTR [bp-4],ax	;ptOld
	jne	$L20032
	cmp	WORD PTR [bp-2],dx
	je	$L20035
$L20032:
	les	bx,DWORD PTR [bp-4]	;ptOld
	mov	ax,WORD PTR es:[bx+4]
	mov	dx,WORD PTR es:[bx+6]
	add	ax,WORD PTR es:[bx]
	adc	dx,WORD PTR es:[bx+2]
	cmp	dx,WORD PTR [bp+8]
	jg	$L20036
	jl	$L20035
	cmp	ax,WORD PTR [bp+6]	;position
	ja	$L20036
$L20035:
	mov	ax,WORD PTR [bp-10]	;size
	cwd	
	add	ax,WORD PTR [bp+6]	;position
	adc	dx,WORD PTR [bp+8]
	les	bx,DWORD PTR [bp-8]	;ptFreeElem
	cmp	dx,WORD PTR es:[bx+2]
	jl	$I571
	jg	$L20036
	cmp	ax,WORD PTR es:[bx]
	jbe	$I571
$L20036:
; Line 312
	push	13
	push	ds
	push	OFFSET DGROUP:$SG574
	push	2
	call	FAR PTR _write
	add	sp,8
; Line 313
	pop	si
	leave	
	ret	
; Line 314
; Line 315
	nop	
$I571:
	mov	ax,es
	or	ax,bx
	je	$I576
; Line 316
	mov	ax,WORD PTR [bp-10]	;size
	cwd	
	mov	cx,ax
	mov	bx,dx
	add	ax,WORD PTR [bp+6]	;position
	adc	dx,WORD PTR [bp+8]
	mov	si,WORD PTR [bp-8]	;ptFreeElem
	cmp	ax,WORD PTR es:[si]
	jne	$I576
	cmp	dx,WORD PTR es:[si+2]
	jne	$I576
; Line 317
	sub	WORD PTR es:[si],cx
	sbb	WORD PTR es:[si+2],bx
; Line 318
	add	WORD PTR es:[si+4],cx
	adc	WORD PTR es:[si+6],bx
; Line 319
	mov	WORD PTR [bp-12],1	;bind
; Line 320
; Line 321
$I576:
	les	bx,DWORD PTR [bp-4]	;ptOld
	mov	ax,WORD PTR es:[bx+4]
	mov	dx,WORD PTR es:[bx+6]
	add	ax,WORD PTR es:[bx]
	adc	dx,WORD PTR es:[bx+2]
	cmp	ax,WORD PTR [bp+6]	;position
	jne	$I577
	cmp	dx,WORD PTR [bp+8]
	jne	$I577
; Line 322
	cmp	WORD PTR [bp-12],0	;bind
	je	$I578
; Line 323
	les	si,DWORD PTR [bp-8]	;ptFreeElem
	mov	ax,WORD PTR es:[si+4]
	mov	dx,WORD PTR es:[si+6]
	mov	es,WORD PTR [bp-2]
	add	WORD PTR es:[bx+4],ax
	adc	WORD PTR es:[bx+6],dx
; Line 324
	les	si,DWORD PTR [bp-8]	;ptFreeElem
	mov	ax,WORD PTR es:[si+8]
	mov	dx,WORD PTR es:[si+10]
	les	bx,DWORD PTR [bp-4]	;ptOld
	mov	WORD PTR es:[bx+8],ax
	mov	WORD PTR es:[bx+10],dx
; Line 325
	mov	ax,WORD PTR $S458_keepElem
	mov	dx,WORD PTR $S458_keepElem+2
	les	bx,DWORD PTR [bp-8]	;ptFreeElem
	mov	WORD PTR es:[bx+8],ax
	mov	WORD PTR es:[bx+10],dx
; Line 326
	mov	WORD PTR $S458_keepElem,bx
	mov	WORD PTR $S458_keepElem+2,es
; Line 327
	pop	si
	leave	
	ret	
	nop	
$I578:
; Line 328
	mov	ax,WORD PTR [bp-10]	;size
	cwd	
	add	WORD PTR es:[bx+4],ax
	adc	WORD PTR es:[bx+6],dx
; Line 329
	pop	si
	leave	
	ret	
; Line 330
; Line 331
	nop	
$I577:
	cmp	WORD PTR [bp-12],0	;bind
	jne	$I582
; Line 333
	push	cs
	call	NEAR PTR _FreeElemAlloc
	mov	es,dx
	mov	bx,ax
	mov	WORD PTR [bp-16],bx	;ptNew
	mov	WORD PTR [bp-14],es
	mov	ax,WORD PTR [bp-10]	;size
	cwd	
	mov	WORD PTR es:[bx+4],ax
	mov	WORD PTR es:[bx+6],dx
; Line 334
	mov	ax,WORD PTR [bp+6]	;position
	mov	dx,WORD PTR [bp+8]
	mov	WORD PTR es:[bx],ax
	mov	WORD PTR es:[bx+2],dx
; Line 335
	mov	ax,WORD PTR [bp-8]	;ptFreeElem
	mov	dx,WORD PTR [bp-6]
	mov	WORD PTR es:[bx+8],ax
	mov	WORD PTR es:[bx+10],dx
; Line 336
	cmp	WORD PTR [bp-4],ax	;ptOld
	jne	$L20037
	cmp	WORD PTR [bp-2],dx
	je	$I581
$L20037:
; Line 337
	les	si,DWORD PTR [bp-4]	;ptOld
	mov	ax,WORD PTR [bp-16]	;ptNew
	mov	dx,WORD PTR [bp-14]
	mov	WORD PTR es:[si+8],ax
	mov	WORD PTR es:[si+10],dx
; Line 338
	pop	si
	leave	
	ret	
	nop	
$I581:
; Line 339
	mov	ax,WORD PTR [bp-16]	;ptNew
	mov	dx,WORD PTR [bp-14]
	mov	WORD PTR $S457_freeList,ax
	mov	WORD PTR $S457_freeList+2,dx
$I582:
; Line 340
; Line 341
	pop	si
	leave	
	ret	

_CacheFree	ENDP
MEMGES	ENDS
END
