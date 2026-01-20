#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: strlwrx
// Description: convert the string into lower case
// Input: char
// Output : void
// Author : Sahir Saiduddin Inamdar
// Date : 20/12/25
//
///////////////////////////////////////////////////////////////////////////////////

void strlwrx(char *str)
{

    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;
        }
        str++;
    }   
}

int main()
{
    char arr[20];

    printf("Enter string\n");
    scanf("%[^'\n']s",arr);

    strlwrx(arr);

    printf("Modified string is %s",arr);

    return 0;
}