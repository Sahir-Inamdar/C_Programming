#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: strtogglex
// Description: convert the string into toggle case
// Input: char
// Output : void
// Author : Sahir Saiduddin Inamdar
// Date : 20/12/25
//
///////////////////////////////////////////////////////////////////////////////////

void strtogglex(char *str)
{

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
        }
        else if(*str >= 'A' && *str <= 'Z')
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

    strtogglex(arr);

    printf("Modified string is %s",arr);

    return 0;
}