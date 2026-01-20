#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: StrCpyX
// Description:  copies characters of that string into another string by 
//               removing all white spaces
// Input: char,char
// Output : void
// Author : Sahir Saiduddin Inamdar
// Date : 20/12/25
//
///////////////////////////////////////////////////////////////////////////////////


void StrCpyX(char *src, char *dest)
{

    while( *src != '\0' )
    {
        if(*src != ' ')
        {
            *dest = *src;
            dest++;
        }
        src++;
    }
    *dest = '\0';

}
int main()
{
    char arr[30] = "Marvel lous Pyth on";
    char brr[30]; // Empty string

    StrCpyX(arr,brr);

    printf("%s",brr); // MarvellousPython 

    return 0;
} 