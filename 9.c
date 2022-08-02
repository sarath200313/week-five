#include <stdio.h>
#include <math.h>
int gcd(int a,int b)
{
	int ans=1;
	for(int i=1;i<a && i<=b;i++)
	{
		if(a%i==0&&b%i==0)ans=i;
	}
	return ans;
}
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d\n%d\n%d",a,b,gcd(a,b));
	return 0;
}
