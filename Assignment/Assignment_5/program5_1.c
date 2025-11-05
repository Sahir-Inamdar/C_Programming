#include <stdio.h>
//////////////////////////
//
// Function Name: CheckEvenOdd
// Description:  check Even or odd
// Input: int
// Output : Even or Odd
// Author : Sahir Saiduddin Inamdar
// Date : 1/11/25
//
//////////////////////////
void CheckEvenOdd(int num)
{
 if(num % 2 == 0)
    {
        printf("Even");
    }
    else
    {
        printf("odd");
    }
}
int main()
{
    int number;

    printf("Enter number: ");
    scanf("%d", &number);

    CheckEvenOdd(number);
    
    return 0;
} 