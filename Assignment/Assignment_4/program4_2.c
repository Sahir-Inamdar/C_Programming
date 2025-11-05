#include<stdio.h>
//////////////////////////
//
// Function Name: FactRev
// Description:  Displays factors in decreasing order.
// Input: int
// Output : int
// Author : Sahir Saiduddin Inamdar
// Date : 1/11/25
//
//////////////////////////
void FactRev(int iNo)
{
int iCnt = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    for(iCnt = iNo-1; iCnt>=1;iCnt--)
    {
        if((iNo % iCnt) ==0 )
    {
        printf("%d\t",iCnt);
    }
    }
}
int main()
{
    int iValue = 0;
    
    printf("Enter number");
    scanf("%d",&iValue);
    
    FactRev(iValue);
    
    return 0;
} 