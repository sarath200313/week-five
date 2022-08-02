#include <stdio.h>
#include <math.h>
 
void factors(int a)
{
int i,j;
 
for(i=1;i<a;i++)
{
for(j=1;j<i;j++)
{
if (a%i==0 && i%j==0)
{
printf("%d\t",i);
}

else
continue;
   
}
}

}
 
int main()
{
int x;

printf("enter the number:");
scanf("%d",&x);

    factors(x);
    
return 0;
}
