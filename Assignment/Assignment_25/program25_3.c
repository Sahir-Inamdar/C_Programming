#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: Display
// Description: displays all such elements which are Even and divisible by 5
// Input: int
// Output : int
// Author : Sahir Saiduddin Inamdar
// Date : 17/11/25
//
///////////////////////////////////////////////////////////////////////////////////

int Display(int Arr[], int iLength)
{
    int iCnt = 0;

    for(iCnt=0; iCnt< iLength; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0 && Arr[iCnt] % 5 == 0)
        {
            printf("%d\t",Arr[iCnt]);
        }
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

   Display(p, iSize); 

    free(p);

    return 0;
}