#include<stdio.h>
///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: Factorial
// Description: finds factorial of given number
// Input: int
// Output : int
// Author : Sahir Saiduddin Inamdar
// Date : 1/11/25
//
///////////////////////////////////////////////////////////////////////////////////
int Factorial(int iNo)
{
    int iCnt = 0;
    int ifac= 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt=1;iCnt<=iNo/2;iCnt++)
    {
        ifac = ifac * iCnt;
    }

    return ifac;

}//Time Complexity= O(n/2)
int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial of number is %d",iRet);
    
    return 0;
}