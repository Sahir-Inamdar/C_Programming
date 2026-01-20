#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: Display
// Description: recursive program which display pattern
// Input: int
// Output : void
// Author : Sahir Saiduddin Inamdar
// Date : 22/12/25
//
///////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    static char cValue = 'A';

    if(iNo == 0)      
    {
        return;
    }
    
    Display(iNo-1);

    printf("%c\t",cValue);

    cValue++;


}
int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
} 