#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: Range
// Description: Display all elements fromthat range 
// Input: int
// Output : void
// Author : Sahir Saiduddin Inamdar
// Date : 16/11/25
//
///////////////////////////////////////////////////////////////////////////////////

void Range(int Arr[], int iLength, int iStart, int iEnd)
{
    int iCnt = 0;

    for(iCnt=0; iCnt< iLength; iCnt++)
    {
        if(Arr[iCnt] >= iStart && Arr[iCnt] <=iEnd)
        {
            printf("%d ",Arr[iCnt]);
        }
    }

}
int main()
{
    int iSize = 0,iCnt = 0, iValue1 = 0,iValue2 = 0;
    int *p = NULL;

    printf("Enter number of elements");
    scanf("%d",&iSize); 

    printf("Enter the starting point");
    scanf("%d",&iValue1);

    printf("Enter the ending point");
    scanf("%d",&iValue2);

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

    Range(p, iSize,iValue1, iValue2);

    free(p);

    return 0;
} 