#include <stdio.h>
///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: sum_of_factors
// Description:  sum of  all positive factors 
// Input: int
// Output : int
// Author : Sahir Saiduddin Inamdar
// Date : 2/11/25
//
///////////////////////////////////////////////////////////////////////////////////
int sum_of_factors(int number)
{
 int iCnt = 0;
    int iSum = 0;

    if(number <= 0)
    {
        number = -number; 
    }
    for(iCnt = 2; iCnt<number; iCnt++)
    {
        if((number % iCnt) == 0 )
        {
            iSum = iSum + iCnt;
        }
    }
 return iSum;
}//Time Complexity= O(n)
int main(void)
{
    int number;

    printf("Enter number : ");
    scanf("%d", &number);

    printf("%d\n", sum_of_factors(number));

    return 0;
}