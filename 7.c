#include <stdio.h>
#include <math.h>

void sumseq(int n)
{
	int i=1,x,y;
	for (int j=0;j<n;j++)
	{
		x=1;
		y=i;
		while(i>0)
		{
			x=x*(i%10);
			i=i/10;
		}
		i=x+y;
		printf("%d,",i);
	}
}
int main()
{
	int a;
	scanf("%d",&a);
	sumseq(a);
	return 0;
}
