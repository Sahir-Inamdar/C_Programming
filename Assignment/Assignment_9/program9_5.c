#include<stdio.h>
///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: FactorialDiff
// Description: returns difference between Even factorial and odd factorial of given number
// Input: int
// Output : int
// Author : Sahir Saiduddin Inamdar
// Date : 2/11/25
//
///////////////////////////////////////////////////////////////////////////////////
int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int ifac1 = 1;
    int ifac2 = 1;
    int iDiff=0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt=1;iCnt<=iNo/2;iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            ifac1 = ifac1 * iCnt;
        }
    }
    for(iCnt=1;iCnt<=iNo/2;iCnt++)
    {
        if(iCnt % 2 != 0)
        {
            ifac2 = ifac2 * iCnt;
        }
    }
    iDiff=ifac1-ifac2;

    return iDiff;
}//Time Complexity= O(2n/2)
int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is %d",iRet);

    return 0;
}