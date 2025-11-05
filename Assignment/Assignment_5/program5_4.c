#include <stdio.h>
//////////////////////////
//
// Function Name: CheckNumberType
// Description:  Checks Positive, Negative, or Zero
// Input: int
// Output : Number Type
// Author : Sahir Saiduddin Inamdar
// Date : 1/11/25
//
//////////////////////////
void CheckNumberType(int num)
{
 if(num > 0)
 {
    printf("positive");
 }
 else if(num < 0)
 {
    printf("negative");
 }
 else
 {
    printf("Zero");
 }
}
int main()
{
 int number;
 printf("Enter number: ");
 scanf("%d", &number);
 CheckNumberType(number);
 return 0;
} 