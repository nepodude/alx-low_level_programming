section .data
    hello db 'Hello, Holberton', 0Ah, 0

section .text
    global _start

_start:
    ; call printf function
    push rbp
    mov rbp, rsp
    mov edi, hello
    mov eax, 0
    call printf
    mov eax, 1
    xor edi, edi
    syscall

