#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: Fact
// Description: recursive program  which accept number from user 
//              and return its factorial
// Input: int
// Output : int
// Author : Sahir Saiduddin Inamdar
// Date : 23/12/25
//
///////////////////////////////////////////////////////////////////////////////////

int Fact(int iNo)
{ 
    static int iFact = 1;

    if(iNo == 0)      
    {
        return iFact;
    }

    iFact = iNo * iFact;
    
    return Fact(iNo-1);

}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = Fact(iValue);

    printf("%d",iRet);

    return 0;
} 