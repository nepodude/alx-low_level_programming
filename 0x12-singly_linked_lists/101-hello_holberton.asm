section .data
    format db 'Hello, Holberton', 0Ah, 0

section .text
    global main
    extern printf

main:
    ; call printf function
    push rbp
    mov rbp, rsp
    mov edi, format
    xor eax, eax
    call printf
    mov eax, 0
    pop rbp
    ret

