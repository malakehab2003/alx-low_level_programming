section .data
    hello db "Hello, Assembly!",0

section .text
    global main

extern printf

main:
    push rbp
    mov rdi, hello   ; Set the format string
    call printf      ; Call the printf function
    pop rbp
    ret

