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
    static int iCnt = 1;
    
    if(iCnt <= 5)
    {
        printf("*\t");
        iCnt++;
        Display();
    }
}
int main()
{
    
    Display();

    return 0;
} 