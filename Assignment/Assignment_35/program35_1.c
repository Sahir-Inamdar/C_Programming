#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: CountCapital
// Description: count number of capital characters 
// Input: char
// Output : int
// Author : Sahir Saiduddin Inamdar
// Date : 30/11/25
//
///////////////////////////////////////////////////////////////////////////////////

int CountCapital(char *str)
{
    int iCnt = 0;

    if(str == NULL)
    {
        return -1;   
    }

    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            iCnt++;
        }
        str++;
    }

    return iCnt;

}

int main()
{

    char arr[20];
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^'\n']s",arr); 

    iRet = CountCapital(arr);

    printf("%d",iRet);

    return 0;

} 
