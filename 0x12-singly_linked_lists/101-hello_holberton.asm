section		.text
	extern	printf
	global	main

main:
	mov		edi, moh
	mov		eax, 0
	call	printf

section		.data
	moh: db `Hello, Holberton\n`, 0xa, 0
