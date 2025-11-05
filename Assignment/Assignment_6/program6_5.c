#include<stdio.h>
//////////////////////////
//
// Function Name: Percentage
// Description: calculates percentage
// Input: int , int   
// Output : float
// Author : Sahir Saiduddin Inamdar
// Date : 1/11/25
//
//////////////////////////
float Percentage(int  fNo1,int fNo2)
{
float FAns=0.0f;

FAns= ((float)fNo2 / fNo1) * 100;

return FAns;
}//Time Complexity= O(1)

int main()
{
    int iValue1 = 0,iValue2 = 0;
    float fRet = 0.0;
    printf("Please enter total marks");
    scanf("%d",&iValue1);

    printf("Please enter obtained marks");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1,iValue2);
    printf("percentage are:%f",fRet); 

    return 0;
}
