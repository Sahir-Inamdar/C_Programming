#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: ChkChar
// Description: counts white spaces in the string
// Input: char,char
// Output : void
// Author : Sahir Saiduddin Inamdar
// Date : 20/12/25
//
///////////////////////////////////////////////////////////////////////////////////

BOOL ChkChar(char *str, char ch)
{
    int bFlag = 0;
    while(*str != '\0')
    {
        if(*str == ch)
        {
            bFlag = 1;
        }
        str++;
    }
    return bFlag;
}

int main()
{
    char arr[20];

    char cValue;

    BOOL bRet = FALSE;

    printf("Enter string\n");
    scanf("%[^'\n']s",arr);

    fflush(stdin);

    printf("Enter the character\n");
    scanf("%c",&cValue);

    bRet = ChkChar(arr, cValue);

    if(bRet == TRUE)
    {
        printf("Character found");
    }
    else
    {
        printf("Character not found");
    }
    return 0;
} 