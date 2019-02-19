#include<stdio.h>
int main()
{
	int fac=1,i,x=5;
	for(i=x;i>0;i--)
	fac=fac*i;
	printf("factor of %d is %d\n",x,fac);
	return 0;
}