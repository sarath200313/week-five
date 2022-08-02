#include <stdio.h> 
void shop(int chocotype, int quantity) 
{	 
	double amount; 
	switch(chocotype) 
	{ 
		case 1: 
		{ 
			amount=(50*0.9)*quantity; 
			printf("total is %.2f\n",amount); 
			break; 
			} 
		case 2: 
		{ 
			amount=(60*0.88)*quantity; 
			printf("total is %.2f\n",amount); 
			break; 
			} 
		case 3: 
		{ 
			amount=(42*0.94)*quantity; 
			printf("total is %.2f\n",amount); 
			break; 
			} 
		case 4: 
		{ 
			amount=(55*0.92)*quantity; 
			printf("total is %.2f\n",amount); 
			break; 
			} 
		} 
	}
int main() 
{ 
	printf("user menu: chocotype 1 is white chocolate, price=rs50 and dicount is 10percent\n"); 
	printf("chocotype 2 is dark chocolate, price is rs60 and discount is 12percent\n"); 
	printf("chocotype 3 is raw chocolate, price is rs 42 and discount is 6\n"); 
	printf("chocotype 4 is bittersweet chocolate, price is rs55 and discount is 8percent\n"); 
	printf("press chocotype=0 to switch off vending machine for the day\n");
	int chocotype=1; 
	int quantity; 
	int w=0; 
	int d=0; 
    int r=0; 
    int b=0; 
	while(chocotype!=0) 
	{ 
		printf("enter your choice of chocolate:"); 
		scanf("%d",&chocotype); 
		printf("enter the quantity:"); 
		scanf("%d",&quantity);
		shop(chocotype,quantity); 
	    if(chocotype==1) 
	    w=w+quantity; 
	    else if(chocotype==2) 
	    d=d+quantity; 
	    else if(chocotype==3) 
	    r=r+quantity; 
	    else if(chocotype==4) 
	    b=b+quantity; 
		} 
		printf("no of white chocolates sold is %d\n",w); 
	    printf("no of dark chocolates sold is %d\n",d); 
	    printf("no of raw chocolates sold is %d\n",r); 
	    printf("no of bittersweet chocolates sold is %d\n",b); 
	return 0; 
}
