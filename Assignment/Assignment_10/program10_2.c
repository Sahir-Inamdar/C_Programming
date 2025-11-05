#include<stdio.h>
///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: RectArea
// Description: calculates the area of Rectangle
// Input: Float
// Output : Double
// Author : Sahir Saiduddin Inamdar
// Date : 2/11/25
//
///////////////////////////////////////////////////////////////////////////////////
double RectArea(float fWidth, float fHeight)
{
    double dArea= 0.0;

    dArea = fWidth * fHeight;

    return dArea;
}//Time Complexity= O(1)
int main()
{
    float fValue1 = 0.0, fValue2 = 0.0;
    double dRet = 0.0;

    printf("Enter width");
    scanf("%f",&fValue1);

    printf("Enter height");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1, fValue2);
    printf("Area of Rectangle is %f",dRet);

    return 0;
}