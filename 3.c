#include <stdio.h>
#include <math.h> 
int fab(int n)
{
int a;
 
int t1=0;
int t2=1;
int i;
for(i=1;i<=n;i++)
{
    a = t1 + t2;
    t2 = a;
    t1 = t2;
    int j;
    for (j=t2+1;j<a;j++)
    {
return j; }
}
}	
int main()
{
int x;
int y;
printf("enter the number:");
scanf("%d",&x);
int i=1;
for(i=1;i<=x;i++)
{
y = fab(i);
printf("%d\t",y);
}
 
return 0;
}
