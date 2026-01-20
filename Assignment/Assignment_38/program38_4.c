#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: StrCpySmall
// Description:  copies characters of that string into another string 
//               by converting all capital characters into small case
// Input: char,char
// Output : void
// Author : Sahir Saiduddin Inamdar
// Date : 21/12/25
//
///////////////////////////////////////////////////////////////////////////////////


void StrCpySmall(char *src, char *dest)
{

    while( *src != '\0' )
    {
        if(*src >= 'A' && *src <= 'Z' )
        {
            *dest = *src+32;
        }
        else
        {
            *dest = *src;
        }
        dest++;
        src++; 
    }
    *dest = '\0';

}
int main()
{
    char arr[30] = "Marvellous Python 2";
    char brr[30]; // Empty string

    StrCpySmall(arr,brr);

    printf("%s",brr); // marvellous python 2   

    return 0;
} 