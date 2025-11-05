#include<stdio.h>
#include<stdbool.h>
//////////////////////////
//
// Function Name: ChkGreater
// Description: Checks if greater than 100 or not
// Input: int
// Output : Greater or not
// Author : Sahir Saiduddin Inamdar
// Date : 1/11/25
//
//////////////////////////
bool ChkGreater(int iNo)
{
    if(iNo > 100)
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
    int iValue = 0;
    bool bRet = false;

    printf("Please enter number");
    scanf("%d",&iValue);

    bRet = ChkGreater(iValue);

    if(bRet == true)
    {
    printf("Greater");
    }
    else
    {
    printf("Smaller");
    }
    
    return 0;
} 