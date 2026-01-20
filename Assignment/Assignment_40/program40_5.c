#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: Display
// Description: recursive program which display pattern
// Input: void
// Output : void
// Author : Sahir Saiduddin Inamdar
// Date : 22/12/25
//
///////////////////////////////////////////////////////////////////////////////////

void Display()
{
    static char Char = 'a';
    
    if(Char <= 'f')
    {
        printf("%c\t",Char);
        Char++;
        Display();
    }
}
int main()
{
    
    Display();

    return 0;
} 