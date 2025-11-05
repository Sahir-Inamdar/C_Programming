#include <stdio.h>
///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: count_factors
// Description:  Counts all positive factors 
// Input: int
// Output : int
// Author : Sahir Saiduddin Inamdar
// Date : 2/11/25
//
///////////////////////////////////////////////////////////////////////////////////
int count_factors(int number)
{
    int iCnt = 0;
    int iCounter=0;
    if(number <= 0)
    {
        number = -number; 
    }
    for(iCnt = 2; iCnt<number; iCnt++)
    {
        if((number % iCnt) == 0 )
        {
          iCounter++;
        }
    }
 
 return iCounter;
}//Time Complexity= O(n)
int main()
{
    int number;

    printf("Enter number : ");
    scanf("%d", &number);

    printf("%d\n", count_factors(number));

    return 0;
}