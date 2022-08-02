#include <stdio.h>
#include <math.h>

void fib(int x)
{
	int n,i=1,j=1;
	if (x==1)
	printf("%d",1);
	else
	printf("%d,%d",i,j);
	for(int k=2;k<x;k++)
	{
		n=j;
		j=i+j;
		i=n;
		printf(",%d",j);
	}
}
int main()
{
	int a;
	scanf("%d",&a);
	printf("%d",a);
	fib(a);
return 0;
}
