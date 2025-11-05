#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: ChkZero
// Description:  Check if No contains Zero
// Input: int
// Output : int
// Author : Sahir Saiduddin Inamdar
// Date : 2/11/25
//
///////////////////////////////////////////////////////////////////////////////////
BOOL ChkZero(int iNo)
{
    int iDigit=0;

    while(iNo != 0 )
    {
        iDigit= iNo % 10;

        if(iDigit == 0)
        {
            return TRUE;
        }

        iNo = iNo / 10;
    }
    return FALSE;
}//Time Complexity= O(n)
int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);

    if(bRet == TRUE)
    {
        printf("It Contains Zero");
    }
    else
    {
        printf("There is no Zero");
    }

    return 0;
} 