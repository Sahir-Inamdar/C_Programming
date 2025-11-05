#include<stdio.h>
#include<stdbool.h>
//////////////////////////
//
// Function Name: ChkEqual
// Description: two numbers are equal or not
// Input: int , int
// Output : Equal or not
// Author : Sahir Saiduddin Inamdar
// Date : 1/11/25
//
//////////////////////////
bool ChkEqual(int iNo1, int iNo2)
{
    if (iNo1 == iNo2)
    {
        return true;
    }
    else
    {
        return false;
    }
    }    //Time Complexity= O(1)

    
int main()
{
    int iValue1 = 0,iValue2 = 0;
    bool bRet = false;

    printf("Please enter two numbers");
    scanf("%d %d",&iValue1, &iValue2);

    bRet = ChkEqual(iValue1, iValue2);

    if(bRet == true)
    {
        printf("Equal");
    }
    else
    {
        printf("not Equal");
    }
    return 0;
} 
