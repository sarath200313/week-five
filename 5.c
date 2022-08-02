#include <stdio.h>
#include <math.h>
 
void word(int n)
{
	int i;
	for(;n>0;n/=10)
	{
		i=n%10;
		if(i==1)
		printf("One");
		else if (i==2)
		printf("Two");
		else if (i==3)
		printf("Three");
		else if (i==4)
		printf("Four");
		else if (i==5)
		printf("Five");
		else if (i==6)
		printf("Six");
		else if (i==7)
		printf("Seven");
		else if (i==8)
		printf("Eight");
		else if (i==9)
		printf("Nine");
	}
}
int main()
{
	int a;
	scanf("%d",&a);
	while(a<100 || a>9999)
	{
		scanf("%d",&a);
	}
	word(a);
	return 0;
}
