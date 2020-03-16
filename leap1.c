#include<stdio.h>
main()
{
	int year;
	
	printf("Enter any year\n");
	scanf("%d",&year);
	
	if(year%4==0)
		{
			if(year%100==0)
			{
				printf("The year is leap!!\n");
		    }
		    if(year%400==0)
		    {
		    	printf("The year is leap!!\n");
			}
		}
	else
		printf("The year you entered is not leap\n");	
}
