#include<stdio.h>
int main()
{
	int n,i,sum_even=0,sum_odd=0;
	printf("enter the value of number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if (i%2==0)
		sum_even=sum_even+i;
		else
		sum_odd=sum_odd+i;
		
	}
	printf("sum of the  all even  numbers upto %d=%d \n",n,sum_even);
		printf("sum of the  all odd numbers upto %d=%d \n",n,sum_odd);
		return 0;
}
