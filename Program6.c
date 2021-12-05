/*1.Write a program which accept range from user and display all numbers in between 
that range.*/

#include<stdio.h>

void Display(int iStart,int iEnd)
{
	if(iStart>iEnd)
	{
		return;
	}
	while(iStart<iEnd-1)
	{
		iStart++;		
		printf("%d\t",iStart);
	}
}

int main()
{
	int iStart=0,iEnd=0;
	
	printf("Enter Starting number\n");
	scanf("%d",&iStart);
	
	printf("Enter Ending number\n");
	scanf("%d",&iEnd);
	
	Display(iStart,iEnd);
	
	return 0;
}
	