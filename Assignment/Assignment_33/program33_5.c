#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: DisplaySchedule
// Description:  displays exam timing
// Input: Char
// Output : void
// Author : Sahir Saiduddin Inamdar
// Date : 29/11/25
//
///////////////////////////////////////////////////////////////////////////////////

void DisplaySchedule(char chDiv)
{
   if(chDiv == 'A' || chDiv == 'a' )
   {
    printf("Your exam at 7.00 AM");
   }
   else if(chDiv == 'B' || chDiv == 'b' )
   {
    printf("Your exam at 8.30 AM");
   }
   else if(chDiv == 'C' || chDiv == 'c' )
   {
    printf("Your exam at 9.20 AM ");
   }
   else if(chDiv == 'D' || chDiv == 'd' )
   {
    printf("Your exam at 10.30 AM");
   }
   else
   {
    printf("invaild Division");
   }
}
int main()
{
    char cValue = '\0';

    printf("Enter your devision : ");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    return 0;
}