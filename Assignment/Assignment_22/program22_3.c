#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: Check
// Description: checks whether that numbers contains 11 in it or not
// Input: bool
// Output : bool
// Author : Sahir Saiduddin Inamdar
// Date : 16/11/25
//
///////////////////////////////////////////////////////////////////////////////////

bool Check(int Arr[], int iLength)
{
    int iCnt = 0;
    bool Bflag = false;

    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            Bflag = true;
            break;
        }
    }
    return Bflag;
}

int main()
{
    int iSize = 0,iRet = 0,iCnt = 0;
    int *p = NULL;
    bool bRet = false;

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

    bRet = Check(p, iSize);

    if(bRet == true)
    {
        printf("11 is present");
    }
    else
    {
        printf("11 is absent");
    }

    free(p);

    return 0;
} 