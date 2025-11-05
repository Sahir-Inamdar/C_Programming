#include<stdio.h>
//////////////////////////
//
// Function Name: SumNonFact
// Description:  Addition of non factors
// Input: int
// Output : int
// Author : Sahir Saiduddin Inamdar
// Date : 1/11/25
//
//////////////////////////
int SumNonFact(int iNo)
{
int iCnt = 0;
int iSum= 0;

    if(iNo <= 0)
    {
        iNo = -iNo; 
    }
    for(iCnt = 1; iCnt<iNo; iCnt++)
    {
        if((iNo % iCnt) != 0 )
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);
    printf("%d",iRet);

    return 0;
}