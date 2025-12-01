#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: ChkCapital
// Description:  check whether it is Capital case or not
// Input: Char
// Output : BOOL
// Author : Sahir Saiduddin Inamdar
// Date : 29/11/25
//
///////////////////////////////////////////////////////////////////////////////////

BOOL ChkCapital(char ch)
{
    BOOL bFlag = 0;

    if(ch >= 'A' && ch <='Z')
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

    bRet = ChkCapital(cValue);

    if(bRet == TRUE)
    {
        printf("It is Capital Character");
    }
    else
    {
        printf("It is not a Capital Character");
    }

    return 0;
}