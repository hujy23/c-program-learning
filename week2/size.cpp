#include <stdio.h>
void main()
{
	int i;
	short j;
	long k;
	int a,b,c,d;
	a = sizeof(i);
	b = sizeof(j);
	c = sizeof(k);
	d = 2147483647 + 1;
	printf("%d,%d,%d,%d\n",a,b,c,d);
}