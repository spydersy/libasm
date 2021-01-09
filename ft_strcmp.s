        global  _ft_strcmp

_ft_strcmp:
        xor rax, rax

        mov rax, -1
        jmp ft_loop

ft_loop:
        inc rax
        mov cl, rdi[rax]
        mov dl, rsi[rax]
        cmp cl, 0
        je  ft_diff
        cmp dl, 0
        je  ft_diff
        cmp cl, dl
        jne ft_diff
        jmp ft_loop

ft_diff:
        sub cl, dl
        xor rax, rax

        cmp cl, 0
        jl ft_neg

        mov al, cl
        ret

ft_neg:
        sub al, cl
        xor rbx, rbx
        mov rbx, -1
        imul rax, rbx
        ret