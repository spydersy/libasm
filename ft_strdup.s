global		_ft_strdup

extern		_malloc
extern		___error
extern		_ft_strlen
extern		_ft_strcpy

_error:
	push	rax
	call	___error
	pop		r8
	mov		[rax], r8
	mov		rax, -1
	ret

_ft_strdup:
	push	rdi
	call	_ft_strlen
	mov		rdi, rax
	call	_malloc
	cmp		rax, 0x00
	je		_error
	mov		rdi, rax
	pop		rsi
	call	_ft_strcpy
	ret
