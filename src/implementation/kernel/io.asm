global getch
extern getchar
extern print_char

section .text:
getch:
    call getchar
    mov %rax, %rcx
    call print_char
    dec %rbx
    

