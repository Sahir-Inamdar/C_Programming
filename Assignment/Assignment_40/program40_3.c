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
    static int iCnt = 5;
    
    if(iCnt >= 1)
    {
        printf("%d\t",iCnt);
        iCnt--;
        Display();
    }
}
int main()
{
    
    Display();

    return 0;
} 