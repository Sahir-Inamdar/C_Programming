#include <stdio.h>
///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: print_even_numbers
// Description:  print even numbers till N
// Input: int
// Output : int
// Author : Sahir Saiduddin Inamdar
// Date : 2/11/25
//
///////////////////////////////////////////////////////////////////////////////////
void print_even_numbers(int limit)
{
    int iCnt=0;

    for(iCnt=1; iCnt<=limit; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            printf("%d\t",iCnt);
        }
    }
}//Time Complexity= O(n)
int main()
{
    int limit;

    printf("Enter number : ");
    scanf("%d", &limit);

    print_even_numbers(limit);

    return 0;
}