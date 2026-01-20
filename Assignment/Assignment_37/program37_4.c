#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: LastChar
// Description: Returns index of last occurrence of that character
// Input: char,char
// Output : int
// Author : Sahir Saiduddin Inamdar
// Date : 20/12/25
//
///////////////////////////////////////////////////////////////////////////////////

int LastChar(char *str, char ch)
{
    int i = 0;
    int iIndex = 0;

    while(str[i] != '\0')
    {
        if(str[i] == ch)
        {
            iIndex = i;
        }
        i++;
    }
    return iIndex;
}
int main()
{
    char arr[20];
    char cValue;

    int iRet = 0;

    printf("Enter string\n");
    scanf("%[^'\n']s",arr);

    fflush(stdin);

    printf("Enter the character\n");
    scanf("%c",&cValue);

    iRet = LastChar(arr, cValue);

    printf("Character location is %d\n",iRet);

    return 0;
}