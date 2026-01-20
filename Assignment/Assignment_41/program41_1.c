#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: Display
// Description: recursive program which display pattern
// Input: int
// Output : void
// Author : Sahir Saiduddin Inamdar
// Date : 23/12/25
//
///////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{

    if(iNo == 0)      
    {
        return;
    }

    printf("%d\t",iNo);
    printf("*\t");

    Display(iNo-1);

}
int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
} 