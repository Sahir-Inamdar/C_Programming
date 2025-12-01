#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: Display
// Description:  Display to Z from the Entered Alphabet  and if small Displays in 
//               reverse
// Input: char
// Output : void
// Author : Sahir Saiduddin Inamdar
// Date : 29/11/25
//
///////////////////////////////////////////////////////////////////////////////////

void Display(char ch)
{
    int iCnt = 0;

    if(ch >= 'a' && ch <='z')
    {
        for(iCnt = 'z'; iCnt >= ch ; iCnt--)
        {
            printf("%c\t",iCnt);
        }
    }
    else if(ch >= 'A' && ch <='Z')
    {
       for(iCnt = ch; iCnt <= 'Z'; iCnt++)
        {
            printf("%c\t",iCnt);
        } 
    }
    else
    {
        return;
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