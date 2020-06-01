#include "mstdarg.h"

.globl _start

_start:
	//mov r0,#1
	//adr r1,msgtext
	//mov r2,#13
	//mov r7,#4
	//svc #0

	//mov r0,#3
	//mov r1,#15
	//mov r2,#15
	//mov r3,#1
	blx mmain
	
	//mov r0,#2
	mov r7,#1
	svc #0
msgtext:
	.asciz "Hello world\n\0"





