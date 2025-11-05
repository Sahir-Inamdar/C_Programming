#include<stdio.h>
#include<stdbool.h>
//////////////////////////
//
// Function Name: Check
// Description: checks weather No is divisible by 5 or not
// Input: int
// Output : if true: divisible by 5
//          if false: not divisible by 5
// Author : Sahir Saiduddin Inamdar
// Date : 31/10/25
//
//////////////////////////
bool Check( int iNo)
{
    if(( iNo % 5) == 0)
    {
        return true;
    }
    else
    {
        return false ;
    }
}
int main()
{
    int iValue = 0;
    bool bRet = false; 
    
    printf("Enter number");
    scanf("%d",&iValue);

bRet = Check(iValue);
    if(bRet == true)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not Divisible by 5");
    }
return 0;
} 