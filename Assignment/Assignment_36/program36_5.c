#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: CountWhite
// Description: counts white spaces in the string
// Input: char
// Output : int
// Author : Sahir Saiduddin Inamdar
// Date : 20/12/25
//
///////////////////////////////////////////////////////////////////////////////////

int CountWhite(char *str)
{
    int iCount = 0;
    while(*str != '\0')
    {
        if(*str == ' ')
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
    int iRet = 0;

    printf("Enter string\n");
    scanf("%[^'\n']s",arr);

    iRet = CountWhite(arr);
    
    printf("%d",iRet);

    return 0;
}