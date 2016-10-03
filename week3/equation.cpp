#include <stdio.h>
#include <math.h>
void main()
{
	float a,b,c,p,d,x1,x2;
	a = 1.0;
	b = 8.5;
	c = 4;
	p = sqrt(b*b-4.0*a*c);
	d = 2.0*a;
	x1 = (-b+p)/d;
	x2 = (-b-p)/d;
	printf("x1=%f\nx2=%f\n",x1,x2);
}