	global main
	extern printf

	section .text
main:
	lea     rdi, [rel msg]
    mov     al, 0
	call    printf

	mov     eax, 0
	ret

section .data
msg: db "Hello, Holberton", 0x0a
