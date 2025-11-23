#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: Pattern
// Description: displays pattern 
// Input: int
// Output : void
// Author : Sahir Saiduddin Inamdar
// Date : 20/11/25
//
///////////////////////////////////////////////////////////////////////////////////

void Pattern(int iNo)
{
    int iCnt = 0, iCount = 0;

    iCount = 1;
    for(iCnt=1 ; iCnt <=iNo; iCnt++)
    {
        printf("%d\t",iCount);
        iCount++;

        printf("*\t");
    }
        
}
    
int main()
{

    int iValue = 0;

    printf("Enter number of elements");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
} 