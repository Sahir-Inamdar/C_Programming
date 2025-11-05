#include<stdio.h>
//////////////////////////
//
// Function Name: PrintEven
// Description: prints even numbers 
// Input: int
// Output : int
// Author : Sahir Saiduddin Inamdar
// Date : 31/10/25
//
//////////////////////////
void PrintEven(int iNo)
{
        if(iNo <= 0)
        {
                return;
        }
        for(int iCnt = 1; iCnt<=iNo; iCnt++ )
        {
               printf("%d\t",iCnt * 2 );
        }
}

int main()
{
        int iValue = 0;
        printf("Enter number\n");
        scanf("%d",&iValue);

        PrintEven(iValue);

        return 0;
} 