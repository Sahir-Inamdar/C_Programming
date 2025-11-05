#include<stdio.h>
//////////////////////////
//
// Function Name: MultipleDisplay
// Description:  print first 5 multiples of N 
// Input: int
// Output : int
// Author : Sahir Saiduddin Inamdar
// Date : 1/11/25
//
//////////////////////////
void MultipleDisplay(int iNo)
{
int iCnt=0;
    for(iCnt=1;iCnt<=5;iCnt++)
    {
        printf("%d\t",iCnt * iNo);
    }
}//Time Complexity= O(n)
int main()
{
    int iValue = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);
    
    return 0;
}