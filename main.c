#include <stdio.h>
#include <stdarg.h>

int param = 1;

int func(int a,int b,int c,int d,int e,int f,int g)
{
	return a+b+c+d+e+f+g;
}


int summary(int num,...)
{
	int i = 0;
	va_list va;
	int arg = 0;
	int sum = 0;
	va_start(va,num);
	for(i=0;i<num;i++){
		arg = va_arg(va,int);
		sum += arg;
	}
	va_end(va);
	return sum;
}

int main(void)
{
	return func(1,2,3,4,5,6,7);
}



