#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: Maximum
// Description: returns the largest number
// Input: int
// Output : int
// Author : Sahir Saiduddin Inamdar
// Date : 16/11/25
//
///////////////////////////////////////////////////////////////////////////////////

int Maximum(int Arr[], int iLength)
{
    int iCnt = 0, iMax = 0;

    for(iCnt=0; iCnt< iLength; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax;
}
int main()
{
    int iSize = 0,iCnt = 0, iRet = 0;
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

    iRet = Maximum(p, iSize);

    printf("Largest Number is %d",iRet);

    free(p);

    return 0;
}