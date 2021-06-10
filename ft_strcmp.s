section .text
global	_ft_strcmp

_ft_strcmp:
	xor	rax, rax
	xor	rbx, rbx
	LOOP:
		mov	r12b, byte [rdi + rbx]
		mov	r13b, byte [rsi + rbx]
		cmp	r12b, r13b
		jne END
		inc	rbx
		cmp r12b, 0
		jne	LOOP
	END:
		mov rax, r12
		sub rax, r13
		ret
