#include<stdio.h>
///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: MultDigits
// Description:  multiplicatin of all digits
// Input: int
// Output : int
// Author : Sahir Saiduddin Inamdar
// Date : 2/11/25
//
///////////////////////////////////////////////////////////////////////////////////
int MultDigits(int iNo)
{
    int iDigit=0;
    int iMulti=1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0 )
    {
        iDigit= iNo % 10;

            iMulti = iMulti * iDigit;
        

        iNo = iNo / 10;
    }
    return iMulti;
}//Time Complexity= O(n)
int main()
{ 
    int iValue = 0;
    int iRet = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet = MultDigits(iValue);

    printf("%d",iRet);

    return 0;
} 