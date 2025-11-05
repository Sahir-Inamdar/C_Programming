#include<stdio.h>
int main()
{
    char Name[30];

    printf("Please enter full name");
    scanf("%[^\n]s",Name);

    printf("Your name is %s",Name);

    //Time Complexity= O(1)
    
    return 0;
} 