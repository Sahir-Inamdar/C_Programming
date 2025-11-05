#include<stdio.h>
///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: TableRev
// Description: prints table in Reverse of given number
// Input: int
// Output : int
// Author : Sahir Saiduddin Inamdar
// Date : 1/11/25
//
///////////////////////////////////////////////////////////////////////////////////
void TableRev(int iNo)
{
  int iCnt=0;
    
    if(iNo < 0)
    {
        iNo= -iNo;
    }
    for(iCnt=10;iCnt>=1;iCnt--)
    {
        printf("%d\t",iCnt*iNo);
    }
} //Time Complexity= O(n)
int main()
{
    int iValue = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    TableRev(iValue);
    
    return 0;
}