#include<stdio.h>
///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: CircleArea
// Description: calculates the area of circle
// Input: Float
// Output : Double
// Author : Sahir Saiduddin Inamdar
// Date : 2/11/25
//
///////////////////////////////////////////////////////////////////////////////////
double CircleArea(float fRadius)
{
    double dArea= 0.0;
    float PI = 3.14f;

    dArea = PI * fRadius * fRadius;

    return dArea;
}//Time Complexity= O(1)
int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter radius");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);
    printf("Area is %lf ",dRet);
    
    return 0;
} 