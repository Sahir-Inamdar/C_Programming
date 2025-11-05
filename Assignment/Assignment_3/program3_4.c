#include<stdio.h>
//////////////////////////
//
// Function Name: DisplayConvert
// Description:  convert case of character
// Input: char
// Output : char
// Author : Sahir Saiduddin Inamdar
// Date : 1/11/25
//
//////////////////////////
void DisplayConvert ( char cValue)
{
    if(cValue >='a' && cValue<='z')
    {
        printf("%c", cValue-32);
    }
    else if(cValue >='A' && cValue<='Z')
    {
        printf("%c", cValue+32);
    }
}
int main()
{
    char cValue = '\0';

    printf("Enter character\n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);
    
    return 0;
} 