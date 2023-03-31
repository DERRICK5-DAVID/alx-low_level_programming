section .data
	hello: db "Hello, Holberton", 10, 0  ; The message to be printed, followed by a newline and a null terminator
	
	extern printf

section .text
	global main

main:
	; Set up the stack frame
	push rbp
	mov rbp, rsp

	; Print the message using printf
	mov rdi, hello  ; Set the first argument to the address of the message
	xor eax, eax    ; Clear the upper 32 bits of the return value
	call printf     ; Call printf with the message as the argument

	; Clean up and exit
	xor eax, eax    ; Set the return value to 0
	pop rbp
	ret
