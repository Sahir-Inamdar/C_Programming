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


void DisplayPrime(PNODE Head)
{
    int  iCnt =  0;
    int iFlag = 0;

    while(Head != NULL)
    {
        for (iCnt = 2 , iFlag = 1; iCnt <= Head->Data / 2; iCnt++)
        {
            if(Head->Data % iCnt == 0)
            {
                iFlag = -1;
                break;
            }
        }
        if(iFlag == 1)
        {
            printf("%d\n",Head->Data);
        }
        Head = Head->Next;
    }

  
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
    InsertFirst(&First, 17);
    InsertFirst(&First, 11);
    InsertFirst(&First, 230);
    InsertFirst(&First, 110);

    Display(First);

    iRet = Count(First);

    printf("number of elements in node are : %d\n",iRet);
    
    DisplayPrime(First);

    return 0;
} 