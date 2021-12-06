/*4. Accept number of rows and number of columns from user and display below 
pattern.
Input : iRow = 6 iCol = 6
Output : 
* * * * * *
* # # # * *
* # # * $ *
* # * $ $ *
* * $ $ $ *
* * * * * *
Program Layout : */

#include<stdio.h>

void Display(int iRow,int iCol)
{
	int i=0,j=0;

	for(i=iRow;i>0;i--)
	{
		for(j=1;j<=iCol;j++)
		{
			if((i==1)||(i==iRow)||(j==1)||(j==iCol)||(i==j))
			{
				printf("*\t");
			}
			else if(i<j)
			{
				printf("$\t");

			}
			else
			{
				printf("#\t");
			}
		}
		printf("\n");
	}
}
int main()
{
	int iRow=0,iCol=0;

	printf("Enter Number of rows\n");
	scanf("%d",&iRow);

	printf("Enter Number of columns\n");
	scanf("%d",&iCol);

	Display(iRow,iCol);

	return 0;
}