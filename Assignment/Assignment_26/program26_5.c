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
    int iCnt = 0;

    for(iCnt=1 ; iCnt <=iNo; iCnt++)
    {
        printf("%d\t",iCnt * 2);
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