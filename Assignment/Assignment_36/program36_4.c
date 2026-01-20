#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: DisplayDigit
// Description: displays digits in the string
// Input: char
// Output : void
// Author : Sahir Saiduddin Inamdar
// Date : 20/12/25
//
///////////////////////////////////////////////////////////////////////////////////

void DisplayDigit(char *str)
{

    while(*str != '\0')
    {
        if(*str >= '0' && *str <= '9')
        {
            printf("%c",*str);
        }
        str++;
    }   
}

int main()
{
    char arr[20];

    printf("Enter string\n");
    scanf("%[^'\n']s",arr);

    DisplayDigit(arr);

    return 0;
}