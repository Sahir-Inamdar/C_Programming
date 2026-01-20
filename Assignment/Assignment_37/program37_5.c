#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: StrRevX
// Description: reverse that string in place
// Input: char
// Output : void
// Author : Sahir Saiduddin Inamdar
// Date : 20/12/25
//
///////////////////////////////////////////////////////////////////////////////////

void StrRevX(char *str)
{
    char *temp = str;

    while(*str != '\0')
    {
        str++;
    }

    while(str >= temp)
    {
        printf("%c",*str);
        str--;
    }
    printf("\n");

}
int main()
{
    char arr[20]; 

    printf("Enter string\n");
    scanf("%[^'\n']s",arr);

    StrRevX(arr);

    printf("Modified string is %s",arr);

    return 0;
} 