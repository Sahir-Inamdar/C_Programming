#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: ChkSmall
// Description:  check whether it is Small case or not
// Input: Char
// Output : BOOL
// Author : Sahir Saiduddin Inamdar
// Date : 29/11/25
//
///////////////////////////////////////////////////////////////////////////////////

BOOL ChkSmall(char ch)
{
    BOOL bFlag = 0;

    if(ch >= 'a' && ch <='z')
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

    bRet = ChkSmall(cValue);

    if(bRet == TRUE)
    {
        printf("It is Small case Character");
    }
    else
    {
        printf("It is not a Small case Character");
    }

    return 0;
}