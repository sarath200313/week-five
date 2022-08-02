#include <stdio.h>
#include <math.h>

int lcm(int a,int b)
{
	int ans=1;
	for(int i=1;i<=a && i<=b;i++)
	{
		if(a%i==0&&b%i==0)ans=i;
	}
	return a*b/ans;
}
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d\n%d\nLCM=%d",a,b,lcm(a,b));
	return 0;
}
