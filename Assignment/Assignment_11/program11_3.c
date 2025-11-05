#include<stdio.h>
///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: RangeSum
// Description: sum of numbers in between that range
// Input: int , int
// Output : int
// Author : Sahir Saiduddin Inamdar
// Date : 2/11/25
//
///////////////////////////////////////////////////////////////////////////////////
int RangeSum(int iStart , int iEnd)
{
int iCnt=0;
int iAddition=0;

    if(iStart>iEnd || iStart < 0 || iEnd < 0)
    {
        return -1;
        
    }
    for(iCnt=iStart; iCnt<=iEnd; iCnt++)
    {
        iAddition = iAddition + iCnt;
    }

    
    return iAddition;
}//Time Complexity= O(n)
int main()
{
    int iValue1 = 0, iValue2 = 0, iRet =0;

    printf("Enter starting point");
    scanf("%d",&iValue1);

    printf("Enter ending point");
    scanf("%d",&iValue2);

    iRet = RangeSum(iValue1, iValue2);
    if(iRet == -1)
    {
        printf("Invalid Range\n");
    }
    else
    {
        printf("Addition is %d",iRet);
    }

    return 0;
} 