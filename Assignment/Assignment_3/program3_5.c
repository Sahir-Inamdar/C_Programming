#include<stdio.h>
typedef int bool ;
# define TRUE 1
# define FALSE 0

//////////////////////////
//
// Function Name: ChkVowel
// Description:   checks that character is vowel(a,e,i,o,u) or not
// Input: char
// Output : character is vowel or not
// Author : Sahir Saiduddin Inamdar
// Date : 1/11/25
//
//////////////////////////
bool ChkVowel ( char cValue)
{
    if( cValue == 'a' || cValue == 'e'|| cValue == 'i'|| cValue == 'o'|| cValue == 'u' ||
        cValue == 'A' || cValue == 'E'|| cValue == 'I'|| cValue == 'O'|| cValue == 'U'  )
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    char cValue = '\0';
    bool bRet = FALSE;
    
    printf("Enter character\n");
    scanf("%c",&cValue);
    
    bRet = ChkVowel(cValue);
    
    if (bRet == TRUE)
    {
        printf("It is Vowel");
    }
    else
    {
        printf("It is not Vowel");
    }
    return 0;
} 