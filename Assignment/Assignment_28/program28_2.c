#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: Pattern
// Description: displays pattern 
// Input: int
// Output : void
// Author : Sahir Saiduddin Inamdar
// Date : 21/11/25
//
///////////////////////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i = 0, j =0;
    char ch = '\0';

    for(i = 1 ; i <= iRow; i++ )
    {
        for(j = 1 , ch = 'A'; j <=iCol; j++,ch++ )
        {
            if(i % 2 == 0)
            {
                printf("%c\t",ch+32);
            }
            else
            {
                printf("%c\t",ch);
            }
        }
        printf("\n");
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns");
    scanf("%d %d",&iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;

} 