#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: struprx
// Description: convert the string into upper case
// Input: char
// Output : void
// Author : Sahir Saiduddin Inamdar
// Date : 20/12/25
//
///////////////////////////////////////////////////////////////////////////////////

void struprx(char *str)
{

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
        }
        str++;
    }   
}

int main()
{
    char arr[20];

    printf("Enter string\n");
    scanf("%[^'\n']s",arr);

    struprx(arr);

    printf("Modified string is %s",arr);

    return 0;
}