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

bool CheckSorted(PNODE Head)
{
    int temp = 0;
    bool bFlag = false;
    
    while(Head != NULL)
    {
        if(Head->Data < temp)
        {
            bFlag = false;
            break;
        }
        bFlag =true;

        temp = Head->Data;

        Head = Head->Next;
    }   

    return bFlag;
    
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
    bool bRet = false;
    PNODE First = NULL;
    InsertFirst(&First, 710);
    InsertFirst(&First, 400);
    InsertFirst(&First, 300);
    InsertFirst(&First, 290);
    InsertFirst(&First, 230);
    InsertFirst(&First, 110);

    Display(First);

    iRet = Count(First);

    printf("number of elements in node are : %d\n",iRet);
    
    bRet = CheckSorted(First);

    if(bRet == false)
    {
        printf("list is not sorted\n");
    }
    else
    {
        printf("list is sorted\n");
    }

    return 0;
} 