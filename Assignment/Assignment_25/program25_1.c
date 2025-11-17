#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: Difference
// Description: displays difference between summation
//              of even elements and summation of odd elements
// Input: int
// Output : int
// Author : Sahir Saiduddin Inamdar
// Date : 17/11/25
//
///////////////////////////////////////////////////////////////////////////////////

int Difference(int Arr[], int iLength)
{
    int iCnt = 0, iSum1 = 0, iSum2 = 0;

    
    for(iCnt=0; iCnt< iLength; iCnt++)
    {
            if(Arr[iCnt] % 2 == 0)
            {
            iSum1 = iSum1 + Arr[iCnt];
            }
            else
            {
                iSum2 = iSum2 + Arr[iCnt];
            }
        }

        return iSum1 - iSum2;
    }

int main()
{
    int iSize = 0,iRet = 0,iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements ",iSize);

    for(iCnt = 0;iCnt<iSize; iCnt++)
    {
        printf("Enter element : ");
        scanf("%d",&p[iCnt]);
    }

   iRet = Difference(p, iSize);

   printf("Result is %d",iRet); 

    free(p);

    return 0;
}