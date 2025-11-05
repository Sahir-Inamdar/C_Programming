#include<stdio.h>
///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: FhtoCs
// Description: enter Fahrenheit and convert it into celsius
// Input: float
// Output : double
// Author : Sahir Saiduddin Inamdar
// Date : 2/11/25
//
///////////////////////////////////////////////////////////////////////////////////
double FhtoCs(float fTemp)
{
    double fcelsius=0.0;

    fcelsius = ((fTemp -32) * (5.0/9.0));

    return fcelsius;
}//Time Complexity= O(1)
int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("temperature in celsius is %lf ",dRet);
    
    return 0;
}