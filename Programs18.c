/*1.Write a program which accept string from user and count number of 
capital characters.
Input : “Marvellous Multi OS”
Output : 4
*/

#include<stdio.h>

int CountCapital(char *str)
{
	int iCnt=0;
	while(*str!='\0')
	{
		if((*str>='A')&&(*str<='Z'))
		{
			iCnt++;
		}
		str++;
	}
	return iCnt;
}
int main()
{
	char Arr[30];

	printf("Enter String\n");
	scanf("%[^'\n']s",Arr);

	int iRet=CountCapital(Arr);
	printf("Capital numbers are :%d\n",iRet);
	return 0;

}