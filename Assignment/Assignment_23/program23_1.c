#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: Check
// Description: checks whether that numbers contains the given NO in it or not
// Input: bool
// Output : bool
// Author : Sahir Saiduddin Inamdar
// Date : 16/11/25
//
///////////////////////////////////////////////////////////////////////////////////

BOOL Check(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    BOOL Bflag = 0;

    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            Bflag = 1;
            break;
        }
    }
    return Bflag;
}
int main()
{
    int iSize = 0,iCnt = 0, iValue = 0;
    int *p = NULL;

    BOOL bRet = 0;

    printf("Enter number of elements");
    scanf("%d",&iSize); 

    printf("Enter the number");
    scanf("%d",&iValue);

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

    bRet = Check(p, iSize,iValue);

    if(bRet == 1)
    {
        printf("Number is present");
    }
    else
    {
        printf("Number is not present");
    }

    free(p);

    return 0;

}