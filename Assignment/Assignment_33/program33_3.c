#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL; 

///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: ChkDigit
// Description:  check whether it is Digit or not
// Input: Char
// Output : BOOL
// Author : Sahir Saiduddin Inamdar
// Date : 29/11/25
//
///////////////////////////////////////////////////////////////////////////////////

BOOL ChkDigit(char ch)
{
    BOOL bFlag = 0;

    if(ch >= '0' && ch <='9')
    {
        bFlag = 1;
    }
    
    return bFlag;

}

int main()
{

    char cValue = '\0';

    BOOL bRet = FALSE;

    printf("Enter the character : ");
    scanf("%c",&cValue);

    bRet = ChkDigit(cValue);

    if(bRet == TRUE)
    {
        printf("It is Digit");
    }
    else
    {
        printf("It is not a Digit");
    }

    return 0;
}