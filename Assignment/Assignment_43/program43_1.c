#include <stdio.h>
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

void InsertFirst(PPNODE Head , int no )
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


void DisplayPerfect(PNODE Head)
{
    int  iCnt =  0;
    int iFlag = 0;

    while(Head != NULL)
    {
        int iSum = 0;
        for (iCnt = 1; iCnt <= Head->Data/2; iCnt++)
        {
            if(Head->Data % iCnt == 0)
            {
                iSum = iSum + iCnt; 
            }
        }

        if(iSum == Head->Data)
        {
            iFlag = 1;
            printf("%d\n",Head->Data);
        }

        Head = Head->Next;
    }

    if(iFlag == 0)
    {
        printf("there is no perfect Number\n");
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
    InsertFirst(&First, 89);
    InsertFirst(&First, 6);
    InsertFirst(&First, 41);
    InsertFirst(&First, 17);
    InsertFirst(&First, 28);
    InsertFirst(&First, 11);

    Display(First);

    iRet = Count(First);

    printf("number of elements in node are : %d\n",iRet);

    printf("Perfect Number :\n");

    DisplayPerfect(First);
    
    return 0;
} 