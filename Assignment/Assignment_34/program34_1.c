#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: DisplayASCII
// Description:  displays ASCII table. Table contains symbol,
//               Decimal, Hexadecimal and Octal representation 
//               of every member from 0 to 255
// Input: int
// Output : void
// Author : Sahir Saiduddin Inamdar
// Date : 29/11/25
//
///////////////////////////////////////////////////////////////////////////////////

void DisplayASCII()
{
    int iCnt = 0;

    printf("Decimal \t Hexadecimal \t  Octal \t  Symbol\n");
    printf("\n");

    for(iCnt = 0 ; iCnt <= 255; iCnt++)
    {
        printf("%d \t\t %02X \t\t  %03o \t\t %c\n",iCnt,iCnt,iCnt,iCnt);
        printf("\n");
    }


}
int main()
{

    DisplayASCII();

    return 0;
} 