#include<stdio.h>
///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: SquareMeter
// Description: convert Square feet into Square meter
// Input: int
// Output : double
// Author : Sahir Saiduddin Inamdar
// Date : 2/11/25
//
///////////////////////////////////////////////////////////////////////////////////
double SquareMeter(int iValue)
{
    double iSqfeet=0.0929;
    double iSqMeter=0.0;

    iSqMeter= iValue * iSqfeet; //O(1)

    return iSqMeter;
}//Time Complexity= O(1)
int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("Area in Square meter is %lf",dRet);

    return 0;
}