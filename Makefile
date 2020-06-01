CROSS_COMPILE = 
CC = ${CROSS_COMPILE}gcc

CFLAG = -O2 -nostdlib -fno-builtin

TARGET = mmain

TARGET:${OBJ}
	${CC} ${CFLAG} ${OBJ} -o $@
	
OBJ = mprintf.o main.o hello.o

mprintf.o:mprintf.h common.h
	${CC} -c mprintf.c -o $@

main.o:common.h
	${CC} -c main.c

hello.o:common.h
	${CC} -c hello.s




