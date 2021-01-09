        global  _ft_strlen

ft_loop:
        inc rax
        mov cl, rdi[rax]
        cmp cl, 0
        je ft_return
        jmp ft_loop
_ft_strlen:
        xor rax, rax
        mov rax, -1
        jmp ft_loop

ft_return:
        ret