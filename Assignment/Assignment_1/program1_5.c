#include<stdio.h>
//////////////////////////
//
// Function Name: Accept
// Description: Accept one number from user and print that number of * on screen. 
// Input: int
// Output : *****
// Author : Sahir Saiduddin Inamdar
// Date : 31/10/25
//
//////////////////////////
void Accept(int iNo)
{
    int iCnt = 0;
    
    for( iCnt=1 ; iCnt<=iNo ; iCnt++ )
    {
    printf("*");
    }
}
int main()
{
    int iValue = 0;
    iValue = 5;

    Accept(iValue);

    return 0;
}