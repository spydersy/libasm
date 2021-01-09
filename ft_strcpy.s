        global  _ft_strcpy

ft_loop:
        inc rax
        mov cl, rsi[rax]
        cmp cl, 0
        je  ft_return
        mov rdi[rax], cl
        jmp ft_loop

_ft_strcpy:
        xor rax, rax
        mov rax, -1
        jmp ft_loop

ft_return:
        mov rdi[rax], cl
        mov rax, rdi
        ret