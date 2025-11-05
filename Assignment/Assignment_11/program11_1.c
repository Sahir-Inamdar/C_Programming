#include<stdio.h>
///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: RangeDisplay
// Description: displays all numbers in between that range
// Input: int , int
// Output : int
// Author : Sahir Saiduddin Inamdar
// Date : 2/11/25
//
///////////////////////////////////////////////////////////////////////////////////
void RangeDisplay(int iStart , int iEnd)
{
    int iCnt=0;

    if(iStart>iEnd)
    {
        printf("Invalid Range");
    }
    for(iCnt=iStart; iCnt<=iEnd; iCnt++)
    {
    if(iStart<iEnd)
    {
        printf("%d\t",iCnt);
    }

    }
}//Time Complexity= O(n)
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point");
    scanf("%d",&iValue1);

    printf("Enter ending point");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1, iValue2);

    return 0;
}