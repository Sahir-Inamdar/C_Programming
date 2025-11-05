#include<stdio.h> 
//////////////////////////
//
// Function Name: Display
// Description: display first number in second number of times. 
// Input: int , int 
// Output : int
// Author : Sahir Saiduddin Inamdar
// Date : 31/10/25
//
//////////////////////////
void Display( int iNo, int iFrequency)  
{ 
int i= 0; 
   
    if ( iFrequency < 0)
    {
        iFrequency = -iFrequency;
    }
    for(i=0; i<iFrequency; i++) 
    { 
        printf("%d",iNo);  
    } 
} 
int main() 
{ 

    int iValue = 0; 
    int iCount = 0; 

    printf("Enter number"); 
    scanf("%d" ,&iValue); 

    printf("Enter frequency"); 
    scanf("%d" ,&iCount); 

    Display(iValue, iCount); 

    return 0; 
}
////////////////////////////////////////////////////////////
//      
//        Testcases Successfully Handled by Application
//          
//          Input :  12 5 
//          Output : 12 12 12 12 12 
//          Input :  -2 3 
//          Output : -2 -2 -2  
//          Input :  21 -3 
//          Output : 21 21 21  
//          Input :  -2 0
//          Output : 
//
//
///////////////////////////////////////////////////////////// 