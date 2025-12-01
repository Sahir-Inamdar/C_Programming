#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: Display
// Description:   display its ASCII value in decimal,octal and hexadecimal format 
//               
// Input: char
// Output : void
// Author : Sahir Saiduddin Inamdar
// Date : 30/11/25
//
///////////////////////////////////////////////////////////////////////////////////

void Display(char ch)
{
    printf("Decimal : %d\n",ch);
    printf("octal : %04o\n",ch);
    printf("HexaDecimal : %04x\n",ch);

}
int main()
{
    char cValue = '\0';

    printf("Enter the character : ");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}