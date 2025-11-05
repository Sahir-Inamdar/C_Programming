#include<stdio.h>
///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: Display
// Description: prints Pattern 
// Input: int
// Output : * OR #
// Author : Sahir Saiduddin Inamdar
// Date : 1/11/25
//
///////////////////////////////////////////////////////////////////////////////////
void Display(int iNo)
{
 int iCnt=0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt=0;iCnt<iNo;iCnt++)
    {
        printf("*\t");
    }
    for(iCnt=0;iCnt<iNo;iCnt++)
    {
        printf("#\t");
    }
}//Time Complexity= O(2n)
int main()
{
    int iValue = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    Display(iValue);
    
    return 0;
} 