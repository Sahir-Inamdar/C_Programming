#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: Sum
// Description: recursive program which accept number from user and return 
//              summation of its digits
// Input: int
// Output : int
// Author : Sahir Saiduddin Inamdar
// Date : 23/12/25
//
///////////////////////////////////////////////////////////////////////////////////

int Sum(int iNo)
{
    static int iSum = 0;
    int iDigit = 0;

    if(iNo == 0)      
    {
        return 0;
    }

    iDigit = iNo%10;
    iSum = iDigit + iSum;
    Sum(iNo/10);

    return iSum;

}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = Sum(iValue);

    printf("%d",iRet);

    return 0;
} 