#include<stdio.h>
///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: CountDiff
// Description:   calcuates difference between summation of even digits 
//                and summation of odd digits
// Input: int
// Output : int
// Author : Sahir Saiduddin Inamdar
// Date : 2/11/25
//
///////////////////////////////////////////////////////////////////////////////////
int CountDiff(int iNo)
{
    int iSum1=0,iSum2=0;
    int iDiff=0,iDigit=0;

    while(iNo != 0 )
    {
        iDigit= iNo % 10;
    
        if(iDigit % 2 == 0)
        {
            iSum1 = iDigit + iSum1; 
        }
        else
        {
            iSum2 = iDigit + iSum2; 
        }
        iNo = iNo / 10;
       
    }

    iDiff= iSum1 - iSum2;
    return iDiff;
}//Time Complexity= O(n)
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);
    printf("%d",iRet); 

    return 0;
}