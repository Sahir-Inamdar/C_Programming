#include<stdio.h>
//////////////////////////
//
// Function Name: MultFact
// Description:  multiplication of factors
// Input: int
// Output : int
// Author : Sahir Saiduddin Inamdar
// Date : 1/11/25
//
//////////////////////////
int MultFact(int iNo)
{
    int iCnt = 0;
    int iMulti = 1;

    if(iNo <= 0)
    {
        iNo = -iNo; 
    }
    for(iCnt = 1; iCnt<iNo; iCnt++)
    {
        if((iNo % iCnt) == 0 )
        {
            iMulti = iMulti * iCnt;
        }
    }
    return iMulti;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);
    printf("%d",iRet);

    return 0;
} 