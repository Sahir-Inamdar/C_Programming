#include<stdio.h>
//////////////////////////
//
// Function Name: FactDiff
// Description:  Difference between Addition of non factors and factors
// Input: int
// Output : int
// Author : Sahir Saiduddin Inamdar
// Date : 1/11/25
//
//////////////////////////
int FactDiff(int iNo)
{
    int iCnt = 0;
    int iSum1= 0;
    int iSum2=0;
    int iAns=0;

    if(iNo <= 0)
    {
        iNo = -iNo; 
    }
    for(iCnt = 1; iCnt<iNo; iCnt++)
    {
        if((iNo % iCnt) == 0 )
        {
            iSum1 = iSum1 + iCnt;
        }
        if((iNo % iCnt) != 0 )
        {
            iSum2 = iSum2 + iCnt;
        }
    }
    iAns = iSum1 - iSum2;
    return iAns;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("%d",iRet);

    return 0;
} 
