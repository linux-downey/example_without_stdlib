#ifndef _MPRINT_
#define _MPRINT_

int print(const char *fmt, ...);

struct printf_info {
	char *bf;	/* Digit buffer */
	char zs;	/* non-zero if a digit has been written */
	char *outstr;	/* Next output position for sprintf() */

	/* Output a character */
	void (*putc)(struct printf_info *info, char ch);

	char buf[1000];
	int index;
};

//https://www.cnblogs.com/cpoint/p/3374994.html


#endif



