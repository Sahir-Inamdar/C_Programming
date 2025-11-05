#include<stdio.h>
///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: DollarToINR
// Description: converts Dollar into Rupees
// Input: int
// Output : int
// Author : Sahir Saiduddin Inamdar
// Date : 1/11/25
//
///////////////////////////////////////////////////////////////////////////////////
int DollarToINR(int iNo)
{
    int iDollar=70;
    int iRupe=0;

    iRupe= iNo * iDollar;
    return iRupe;
}//Time Complexity= O(1)
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number of USD");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d",iRet);
    
    return 0;
} 