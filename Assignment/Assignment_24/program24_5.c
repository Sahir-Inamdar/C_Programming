#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: DigitsSum
// Description: displays summation of digits of each number
// Input: int
// Output : int
// Author : Sahir Saiduddin Inamdar
// Date : 16/11/25
//
///////////////////////////////////////////////////////////////////////////////////

void DigitsSum(int Arr[], int iLength)
{
    int iCnt = 0, iDigit = 0, iSum = 0;

    
    for(iCnt=0; iCnt< iLength; iCnt++)
    {
        iSum = 0;
        while(Arr[iCnt] != 0 )
        {
            iDigit = Arr[iCnt] % 10;
            iSum = iSum + iDigit;
            Arr[iCnt] = Arr[iCnt] / 10;
        }
        printf("%d\t",iSum);
    }
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

    DigitsSum(p, iSize);

    free(p);

    return 0;
}