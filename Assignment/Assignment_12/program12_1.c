#include <stdio.h>
///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: print_factors
// Description:  prints all positive factors in ascending order
// Input: int
// Output : int
// Author : Sahir Saiduddin Inamdar
// Date : 2/11/25
//
///////////////////////////////////////////////////////////////////////////////////
void print_factors(int number)
{
int iCnt = 0;
    if(number <= 0)
    {
        number = -number; 
    }
    for(iCnt = 2; iCnt<number; iCnt++)
    {
        if((number % iCnt) == 0 )
        {
        
            printf("%d\t",iCnt);
        }
    }
}//Time Complexity= O(n)
int main()
{
    int number;

    printf("Enter number : ");
    scanf("%d", &number);

    print_factors(number);
    
    return 0;
}