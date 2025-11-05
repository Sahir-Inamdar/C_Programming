#include<stdio.h>
///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: RangeDisplayEven
// Description: displays all even numbers in between that range
// Input: int , int
// Output : int
// Author : Sahir Saiduddin Inamdar
// Date : 2/11/25
//
///////////////////////////////////////////////////////////////////////////////////
void RangeDisplayEven(int iStart , int iEnd)
{
int iCnt=0;

    if(iStart>iEnd)
    {
        printf("Invalid Range");
    }
    for(iCnt=iStart; iCnt<=iEnd; iCnt++)
    {
      if(iCnt % 2 == 0)
      {
    if(iStart<iEnd)
    {
        printf("%d\t",iCnt);
    }
      }

    }
}//Time Complexity= O(n)
int main()
{
int iValue1 = 0, iValue2 = 0;
printf("Enter starting point");
scanf("%d",&iValue1);
printf("Enter ending point");
scanf("%d",&iValue2);
RangeDisplayEven(iValue1, iValue2);
return 0;
} 