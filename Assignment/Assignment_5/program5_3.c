#include <stdio.h>
//////////////////////////
//
// Function Name: CheckLeapYear
// Description:  Find leap year
// Input: int
// Output : leap year or not
// Author : Sahir Saiduddin Inamdar
// Date : 1/11/25
//
//////////////////////////
void CheckLeapYear(int year)
{
 if(year % 4 == 0)
    {
        printf("leap year");
    }
    else
    {
        printf("not a leap year");
    }
}

int main()
{
    int yr;

    printf("Enter year: ");
    scanf("%d", &yr);

    CheckLeapYear(yr);
    
    return 0;
}
