        global  _ft_write
        extern  ___error

set_error:
        push rax
        call ___error
        pop  r15
        mov  [rax], r15
        mov  rax, -1
        ret

_ft_write:
        xor rax, rax
        mov rax, 0x02000004
        syscall
        jc  set_error
        ret