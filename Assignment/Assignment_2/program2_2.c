#include<stdio.h>
//////////////////////////
//
// Function Name: Display
// Description: Accept one number from user and print that number of * on screen. 
// Input: int
// Output : *(accepted NO)
// Author : Sahir Saiduddin Inamdar
// Date : 31/10/25
//
//////////////////////////
void Display(int iNo)  
{ 
if ( iNo < 0)
{
    iNo = -iNo;
}
while( iNo > 0 ) 
{  
    printf("*");  
    iNo--;  
} 
}
int main() 
{ 
int iValue = 0; 
printf("Enter number"); 
scanf("%d",&iValue); 
Display(iValue); 
return 0; 
}