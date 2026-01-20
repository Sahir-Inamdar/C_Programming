#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;
struct node
{
 int Data;
 struct node *Next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE Head , int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->Next = NULL;
    newn->Data = no;
    if (*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn -> Next = *Head;
        *Head = newn;
    }
}
void Display(PNODE Head)
{
    while(Head != NULL)
    {
        printf("| %d |->",Head->Data);
        Head = Head->Next;
    }
    printf("NULL \n");
}

int CountTwoDigit(PNODE Head)
{
    int iDigit = 0;
    int TwodigitCount = 0;

    while(Head != NULL)
    {
        int iCount = 0;
        while(Head->Data != 0)
        {
            iDigit = Head->Data % 10;
            iCount++;
            Head->Data = Head->Data / 10; 
        }
        if(iCount == 2 )
        {
            TwodigitCount++;
        }
        Head = Head->Next;
    }   
    return TwodigitCount;
}

int Count(PNODE Head)
{
    int iCount = 0;

    while(Head != NULL)
    {
        iCount++;
        Head = Head->Next;
    }
    return iCount;
}


int main()
{
    int iRet = 0;
    PNODE First = NULL;
    InsertFirst(&First, 710);
    InsertFirst(&First, 333);
    InsertFirst(&First, 12);
    InsertFirst(&First, 90);
    InsertFirst(&First, 230);
    InsertFirst(&First, 110);

    Display(First);

    iRet = Count(First);

    printf("number of elements in node are : %d\n",iRet);
    
    iRet = CountTwoDigit(First);

    printf("count of two digits number is : %d\n",iRet);

    return 0;
} 