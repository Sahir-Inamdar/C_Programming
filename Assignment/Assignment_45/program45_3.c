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


int FirstOccur( PNODE Head , int no )
{
    int  iIndex = 1;
    int temp =0 ;

    while(Head != NULL)
    {
        if(Head->Data == no)
        {
            temp = iIndex;
        }
        iIndex++;
        Head = Head->Next;
        
    }
    return temp;
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
    InsertFirst(&First, 640);
    InsertFirst(&First, 23);
    InsertFirst(&First, 23);
    InsertFirst(&First, 230);
    InsertFirst(&First, 110);

    Display(First);

    iRet = Count(First);

    printf("number of elements in node are : %d\n",iRet);
    
    iRet = FirstOccur(First,23);

    if(iRet == 0)
    {
        printf("Element not found\n");
    }
    else
    {
        printf("first occur at position : %d\n",iRet);
    }    
    return 0;
} 