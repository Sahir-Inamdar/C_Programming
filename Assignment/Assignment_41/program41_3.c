#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: Strlen
// Description: recursive program  which accept string from user and count number 
//              of characters
// Input: char
// Output : int
// Author : Sahir Saiduddin Inamdar
// Date : 23/12/25
//
///////////////////////////////////////////////////////////////////////////////////

int Strlen(char *str)
{
    static int iCount = 0;

    if(*str == '\0')      
    {
        return iCount;
    }

    iCount++;

    return Strlen(str+1);
}
int main()
{
    int iRet = 0;
    char arr[20];

    printf("Enter string\n");
    scanf("%s",arr);

    iRet = Strlen(arr);

    printf("%d",iRet);

    return 0;

} 