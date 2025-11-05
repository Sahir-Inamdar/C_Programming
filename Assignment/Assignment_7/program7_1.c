#include<stdio.h>
//////////////////////////
//
// Function Name: Pattern
// Description: prints $ * number of time
// Input: int
// Output : $ *
// Author : Sahir Saiduddin Inamdar
// Date : 1/11/25
//
//////////////////////////
void Pattern(int iNo)
{
    int iCnt=0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt=0;iCnt<iNo;iCnt++)
    {
        printf("$\t");
        printf("*\t");
    }
} //Time Complexity= O(n)
int main()
{
    int iValue = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    Pattern(iValue);
    
    return 0; 
}