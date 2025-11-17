#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: Digits
// Description: display all such numbers which contains 3 digits in it
// Input: int
// Output : int
// Author : Sahir Saiduddin Inamdar
// Date : 16/11/25
//
///////////////////////////////////////////////////////////////////////////////////

void Digits(int Arr[], int iLength)
{
    int iCnt = 0, iDigit = 0, iCount = 0, iStore = 0;

    
    for(iCnt=0; iCnt< iLength; iCnt++)
    {
        iStore = Arr[iCnt];
        iCount = 0;
        while(Arr[iCnt] != 0 )
        {
            iDigit = Arr[iCnt] % 10;
            iCount++;
            Arr[iCnt] = Arr[iCnt] / 10;
        }
        if(iCount == 3)
        {
            printf("%d\t",iStore);
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

    Digits(p, iSize);

    free(p);

    return 0;
}