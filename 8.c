#include <stdio.h>
#include <math.h>

void facsum(int n)
{
	int i,c,x,j;
	j=n;
	for(i=0;n>0;n/=10)
	{
		c=n%10;
		x=1;
		for(;c>0;c--)
		{
			x*=c;
		}
		i+=x;
	}
	if(i==j)
	printf("%d",j);
	else
	printf("%d",j);
}
int main()
{
	int a;
	scanf("%d",&a);
	facsum(a);
	return 0;
}
