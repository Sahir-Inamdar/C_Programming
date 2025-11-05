#include<stdio.h>
//////////////////////////
//
// Function Name: Display
// Description:  if number is less than 10 then prints “Hello” otherwise prints “Demo” 
// Input: int
// Output : Hello OR Demo
// Author : Sahir Saiduddin Inamdar
// Date : 31/10/25
//
//////////////////////////
void Display ( int iNo)  
{ 
    if(iNo < 10)  
    {  
        printf("Hello");  
    } 
    else 
    {  
        printf("Demo");  
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