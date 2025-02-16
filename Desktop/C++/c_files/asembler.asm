section .data
	form db  "%s", 0
	msg  db  "HelloWorld",10,0
	size equ  11
extern printf
section .text
	global main
main:
	push rbp
	mov rbp, rsp
	
	mov rax, 0
	mov rdi, form
	mov rsi, msg
	call printf
	mov rbx, 0
	mov rsi, msg
L1:
	mov r13b, 32
	not r13b
	cmp rbx, size
	je end
	and byte[msg + rbx], r13b
	inc rbx	        
	jmp L1
end:
	mov rax, 0
	mov rdi, form
	mov rsi, msg
	call printf
	
	mov rsp, rbp
	pop rbp
	ret
