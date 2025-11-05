#include<stdio.h>
///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: CountTwo
// Description:  Counts No of Two
// Input: int
// Output : int
// Author : Sahir Saiduddin Inamdar
// Date : 2/11/25
//
///////////////////////////////////////////////////////////////////////////////////
int CountTwo(int iNo)
{
int iDigit=0;
int iCount=0;

    while(iNo != 0 )
    {
        iDigit= iNo % 10;

        if(iDigit == 2)
        {
            iCount++;
        }

        iNo = iNo / 10;
    }
    return iCount;
}//Time Complexity= O(n)
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet = CountTwo(iValue);
    printf("%d",iRet);

    return 0;
} 