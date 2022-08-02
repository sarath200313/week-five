#include <stdio.h>
#include <math.h>
void twoscomp(char *x)
{
	char ones[9], twos[9];
	int i, temp=1;
	for(i=0; i<8; i++)
	{
		if(x[i] == 'i')
		ones[i] = '0';
		else if(x[i] == '0')
		ones[i] = '1';
	}
	ones[8] = '\0';
	for(i=7; i>=0; i--)
	{
		if(ones[i] == '0' && temp == 1)
		{
			twos[i] = '1';
			temp = 0;
		}
		else if(ones[i] == '1' && temp == 1)
		twos[i] = '0';
		else
		twos[i] = ones[i];
	}
	twos[8] = '\0';
	printf("%s\n",twos);
}
int main()
{
	char a[9];
	scanf("%s",a);
	printf("\nThe 2's complement=%s",a);
	twoscomp(a);
	return 0;
}
