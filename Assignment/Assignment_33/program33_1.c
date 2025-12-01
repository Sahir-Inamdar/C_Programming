#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: ChkAlpha
// Description:  check whether it is alphabet or not
// Input: Char
// Output : BOOL
// Author : Sahir Saiduddin Inamdar
// Date : 29/11/25
//
///////////////////////////////////////////////////////////////////////////////////

BOOL ChkAlpha(char ch)
{
    BOOL bFlag = 0;

    if(ch >= 'a' && ch <='z' || ch >= 'A' && ch <='Z')
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

    bRet = ChkAlpha(cValue);

    if(bRet == TRUE)
    {
        printf("It is Character");
    }
    else
    {
        printf("It is not a Character");
    }

    return 0;
}