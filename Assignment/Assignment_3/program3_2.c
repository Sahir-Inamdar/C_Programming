#include<stdio.h>
//////////////////////////
//
// Function Name: DisplayFactor
// Description:  prints even factors of that number
// Input: int
// Output : int
// Author : Sahir Saiduddin Inamdar
// Date : 1/11/25
//
//////////////////////////
void DisplayFactor(int iNo)
{
    int i = 0;
    if(iNo <= 0)
    {
        iNo = -iNo; 
    }
    for(i = 1; i<iNo;i++)
    {
        if((iNo % i) == 0 && (i % 2) ==0)
        {
        
            printf("%d\t",i);
        }
    }
}
int main()
{
    int iValue = 0;
    printf("Enter number\n");
    scanf("%d",&iValue);

    DisplayFactor(iValue);

    return 0;
} 