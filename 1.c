#include <stdio.h>
#include <math.h>
float compound(int p,int r,int n,int t)
{
	return p*pow(1+r/n,n*t);
}
int main()
{
	int P,R,T,N;
	scanf("%d%d%d%d",&P,&R,&N,&T);
	printf("%f\n",compound(P,R,N,T));
	return 0;
}
