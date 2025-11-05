#include <stdio.h>
#include <stdbool.h>
///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: is_divisible_by_five
// Description:  checks is given No divisible by five 
// Input: int
// Output : boolean
// Author : Sahir Saiduddin Inamdar
// Date : 2/11/25
//
///////////////////////////////////////////////////////////////////////////////////
bool is_divisible_by_five(int number)
{
 if(number % 5 ==0)
 {
    return true;
 }
 else
 {
 return false;
}
}//Time Complexity= O(1)
int main(void)
{
    int number;

    printf("Enter number : ");
    scanf("%d", &number);

    printf("%s\n", is_divisible_by_five(number) ? "Yes" : "No");

    return 0;
}