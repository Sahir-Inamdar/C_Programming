#include <stdio.h>
//////////////////////////
//
// Function Name: FindMax
// Description:  Maximum of Two Numbers
// Input: int , int
// Output : int
// Author : Sahir Saiduddin Inamdar
// Date : 1/11/25
//
//////////////////////////
int FindMax(int a, int b)
{
   int iMax=0;
   if(a > b)
    {
     iMax=a;   
    }
    else
    {
       iMax=b;
    }
    return iMax;
}
int main()
{
    int num1, num2, result;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    result = FindMax(num1, num2);

    printf("Maximum is: %d\n", result);

    return 0;
} 