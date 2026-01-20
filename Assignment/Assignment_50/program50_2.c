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

void DisplayGreaterThanAvg(PNODE Head)
{
    int iSum = 0,iCount = 0;
    float average = 0.0f;
    PNODE temp = Head;

    while(temp != NULL)
    {
        iCount++;

        iSum = iSum + temp->Data;
        
        temp = temp->Next;
    }   

    average = (float)iSum/iCount;

    printf("Average is %f\n",average);
    
    while(Head != NULL)
    {
        if(Head->Data > average)
        {
            printf("| %d |->",Head->Data);
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
    InsertFirst(&First, 710);
    InsertFirst(&First, 33);
    InsertFirst(&First, 12);
    InsertFirst(&First, 90);
    InsertFirst(&First, 230);
    InsertFirst(&First, 110);

    Display(First);

    iRet = Count(First);

    printf("number of elements in node are : %d\n",iRet);
    
    DisplayGreaterThanAvg(First);

    return 0;
} 