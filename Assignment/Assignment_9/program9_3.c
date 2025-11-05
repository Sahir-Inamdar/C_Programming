#include<stdio.h>
///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: EvenFactorial
// Description: factorial of Even numbers of given Number
// Input: int
// Output : int
// Author : Sahir Saiduddin Inamdar
// Date : 2/11/25
//
///////////////////////////////////////////////////////////////////////////////////
int EvenFactorial(int iNo)
{ 
    int iCnt = 0;
    int ifac = 1;
    if(iNo < 0)
    {
        iNo = -iNo;   //O(1)
    }
    for(iCnt=1;iCnt<=iNo/2;iCnt++)  //O(n)
    {
        if(iCnt % 2 == 0)    
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

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of number is %d",iRet);

    return 0;
} 