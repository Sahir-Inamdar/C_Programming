#include<stdio.h>
//////////////////////////
//
// Function Name: Display
// Description: prints its number line
// Input: int
// Output : int
// Author : Sahir Saiduddin Inamdar
// Date : 1/11/25
//
//////////////////////////
void Display(int iNo)
{
 int iCnt=0;

    for(iCnt= -iNo;iCnt<=iNo;iCnt++)
    {
        printf("%d\t",iCnt);
    }
}//Time Complexity= O(n)
int main()
{
    int iValue = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
} 