#include<stdio.h>
///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: OddFactorial
// Description: factorial of odd numbers of given Number
// Input: int
// Output : int
// Author : Sahir Saiduddin Inamdar
// Date : 2/11/25
//
///////////////////////////////////////////////////////////////////////////////////
int OddFactorial(int iNo)
{
    int iCnt = 0;
    int ifac = 1;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt=1;iCnt<=iNo/2;iCnt++)
    {
        if(iCnt % 2 != 0)
        {
            ifac = ifac * iCnt;
        }
    }

    return ifac;
}//Time Complexity= O(n/2)
int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);

    printf("Odd Factorial of number is %d",iRet);

    return 0;
}