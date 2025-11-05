#include<stdio.h>
///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: RangeSumEven
// Description: sum of even numbers in between that range
// Input: int , int
// Output : int
// Author : Sahir Saiduddin Inamdar
// Date : 2/11/25
//
///////////////////////////////////////////////////////////////////////////////////
int RangeSumEven(int iStart , int iEnd)
{
    int iCnt=0;
    int iAddition=0;

    if(iStart>iEnd || iStart < 0 || iEnd < 0)
    {
        return -1;
        
    }
    for(iCnt=iStart; iCnt<=iEnd; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
       iAddition = iAddition + iCnt;
        }
    }
return iAddition;
    }//Time Complexity= O(N)
    

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet =0;

    printf("Enter starting point");
    scanf("%d",&iValue1);

    printf("Enter ending point");
    scanf("%d",&iValue2);

    iRet = RangeSumEven(iValue1, iValue2);

    if(iRet == -1)
    {
        printf("invalid Range");
    }
    else
    {
    printf("Addition is %d",iRet);
    }
    return 0;
    } 