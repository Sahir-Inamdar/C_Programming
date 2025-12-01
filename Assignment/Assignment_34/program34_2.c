#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: Display
// Description:  converts capital to small and small to capital
// Input: char
// Output : void
// Author : Sahir Saiduddin Inamdar
// Date : 29/11/25
//
///////////////////////////////////////////////////////////////////////////////////

void Display(char ch)
{
    if(ch >= 'a' && ch <='z')
    {
        printf("%c",ch-32);
    }
    else if(ch >= 'A' && ch <='Z')
    {
        printf("%c",ch+32);
    }
    else
    {
        printf("%c",ch);
    }
}
int main()
{
    char cValue = '\0';

    printf("Enter the character : ");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}