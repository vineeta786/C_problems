#include<stdio.h>
main()
{
	int year;
	printf("Enter any year\n");
	scanf("%d",&year);
	 if(year%4==0||year%400==0||year%100==0)
	 	printf("the year is leap\n ");
	 else
	 	printf("the year is not leap\n");	
}
