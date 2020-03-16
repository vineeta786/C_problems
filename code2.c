#include<stdio.h>
main()
{
	float bal;
	int amt;
	printf("Enter the account balance\n");
	scanf("%f",&bal);
	printf("Enter the amount to withdraw\n");
	scanf("%d",&amt);
	
	if(amt%5==0 &&amt<=2000&&amt>0)
	printf("The balance is %f\n",bal-amt-0.5);
	else
	printf("The balance is %f\n",bal);
}
