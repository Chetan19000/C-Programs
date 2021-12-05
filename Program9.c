/*3. Accept number from user and display below pattern.
Input : 5
Output : 1 * 2 * 3 * 4 * 5 *
Program Layout : */
#include<stdio.h>
void Pattern(int iNo)
{
// Logic
int iCnt=0;
for(iCnt=1;iCnt<=iNo;iCnt++)
{
	printf("%d   *\t",iCnt);
}
}
int main()
{
int iValue = 0;
printf("Enter number of elements\n");
scanf("%d",&iValue);
Pattern(iValue);
return 0;
}