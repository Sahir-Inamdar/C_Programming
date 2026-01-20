#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: ChkChar
// Description: Returns frequency of that character
// Input: char,char
// Output : int
// Author : Sahir Saiduddin Inamdar
// Date : 20/12/25
//
///////////////////////////////////////////////////////////////////////////////////

int CountChar(char *str, char ch)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}
int main()
{
    char arr[20];
    char cValue;

    int iRet = 0;

    printf("Enter string");
    scanf("%[^'\n']s",arr);

    fflush(stdin);

    printf("Enter the character\n");
    scanf("%c",&cValue);

    iRet = CountChar(arr, cValue);

    printf("Character frequency is %d\n",iRet);

    return 0;
}