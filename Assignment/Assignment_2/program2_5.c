#include<stdio.h> 
#include<stdbool.h>
//////////////////////////
//
// Function Name: ChkEven
// Description: checks whether number is even or odd
// Input: int
// Output : Even or Odd
// Author : Sahir Saiduddin Inamdar
// Date : 31/10/25
//
//////////////////////////
bool ChkEven(int iNo)  
{ 
    if((iNo % 2)==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}  
int main() 
{ 
    int iValue = 0; 
    bool bRet = false; 

    printf("Enter number"); 
    scanf("%d",&iValue); 

    bRet = ChkEven(iValue); 
        if(bRet == true)
        {
            printf("%d is Even",iValue);

        }
        else
        {
            printf("%d is odd",iValue);
        }
        
    return 0; 
}