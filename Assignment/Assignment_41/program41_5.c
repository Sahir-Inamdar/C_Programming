#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: Mult
// Description: recursive program  which accept number from user 
//              and return its factorial
// Input: int
// Output : int
// Author : Sahir Saiduddin Inamdar
// Date : 23/12/25
//
///////////////////////////////////////////////////////////////////////////////////

int Mult(int iNo)
{ 
    static int iMult = 1;
    int iDigit = 0;

    if(iNo == 0)      
    {
        return iMult;
    }

    iDigit = iNo%10;
    iMult = iDigit * iMult;
    Mult(iNo/10);

    return iMult;

}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = Mult(iValue);

    printf("%d",iRet);

    return 0;
} 