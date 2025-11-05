#include<stdio.h>
///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: Table
// Description: prints table of given number
// Input: int
// Output : int
// Author : Sahir Saiduddin Inamdar
// Date : 1/11/25
//
///////////////////////////////////////////////////////////////////////////////////
void Table(int iNo)
{
    int iCnt=0;
    
    if(iNo < 0)
    {
        iNo= -iNo;
    }
    for(iCnt=1;iCnt<=10;iCnt++)
    {
        printf("%d\t",iCnt*iNo);
    }
}//Time Complexity= O(n)
int main()
{
    int iValue = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    Table(iValue);

    return 0;
}