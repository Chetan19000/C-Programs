/*1. Accept number of rows and number of columns from user and display 
below pattern.
Input : iRow = 4 iCol = 3
Output : * * *
* * *
* * *
* * *
Program Layout : */
#include<stdio.h>
void Pattern(int iRow, int iCol)
{
// Logic
int iCnt=0;
int iC=0;
for(iCnt=1;iCnt<=iRow;iCnt++)
{
	printf("\n");
	for(iC=1;iC<=iCol;iC++)
	{
     printf("*\t"); 
	}
}
}
int main()
{
int iValue1 = 0, iValue2 = 0;
printf("Enter number of rows and columns\n");
scanf("%d %d",&iValue1, &iValue2);
Pattern(iValue1, iValue2);
return 0;
}