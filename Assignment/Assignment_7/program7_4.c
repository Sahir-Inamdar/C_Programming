#include<stdio.h>
//////////////////////////
//
// Function Name: OddDisplay
// Description: print all odd numbers up to N 
// Input: int
// Output : int
// Author : Sahir Saiduddin Inamdar
// Date : 1/11/25
//
//////////////////////////
void OddDisplay(int iNo)
{
    int iCnt=0;
     if(iNo <= 0)
    {
        iNo = -iNo;   
    }
    for(iCnt=0;iCnt<iNo;iCnt++)
    {
        if(iCnt % 2 != 0 )
        {
            printf("%d\t",iCnt);
        }
    }
}//Time Complexity= O(n)
int main()
{
    int iValue = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    return 0;
}