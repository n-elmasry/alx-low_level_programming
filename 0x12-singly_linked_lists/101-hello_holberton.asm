section .data
    hello_fmt db "Hello, Holberton",10,0  ; The format string with a newline character

section .text
    global main
    extern printf

main:
    sub rsp, 8              ; Align the stack to a 16-byte boundary
    mov rdi, hello_fmt     ; Load the address of the format string
    call printf            ; Call the printf function
    add rsp, 8              ; Restore the stack pointer
    ret

