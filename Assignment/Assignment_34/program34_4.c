#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: ChkSpecial
// Description:  check whether it is special symbol or not 
//               (!, @, #, $, %, ^, &, *)            
// Input: char
// Output : BOOL
// Author : Sahir Saiduddin Inamdar
// Date : 30/11/25
//
///////////////////////////////////////////////////////////////////////////////////

BOOL ChkSpecial(char ch)
{
    BOOL bFlag = 0;

    if(ch == '!' || ch == '@' || ch == '#' || ch == '$' || 
        ch == '%' || ch == '^' || ch == '&' || ch == '*')
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
    
    bRet = ChkSpecial(cValue);
    
    if(bRet == TRUE)
    {
        printf("It is special Character");
    }
    else
    {
        printf("It is not a special Character");
    }
    return 0;   
} 