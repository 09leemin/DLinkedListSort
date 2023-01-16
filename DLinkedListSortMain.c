#include <stdio.h>
#include "DLinkedList.h"

int WhoIsPrecede(int d1, int d2)
{
    if(d1 < d2)
        return 0;   // d1 is precede, because of ascending order
    else
        return 1;   // d2 is precede or same.
}

int main(void)
{
    // List init
    List list;
    int data;
    ListInit(&list);

    SetSortRule(&list, WhoIsPrecede);

    // 5 data save
    LInsert(&list, 11);
    LInsert(&list, 13);
    LInsert(&list, 1);
    LInsert(&list, 11);
    LInsert(&list, 17);

    printf("Number of saved data: %d\n", LCount(&list));
    // print all saved data
    if(LFirst(&list, &data))
    {
        printf("%d ", data);
        while(LNext(&list, &data))
        {
            printf("%d ", data);
        }
    }
    printf("\n\n");

    // delete 11 value data 
    if(LFirst(&list, &data))
    {
        if(data == 11)
            LRemove(&list);
        while(LNext(&list, &data))
        {
            if(data == 11)
                LRemove(&list);
        }
    }

    printf("After Delete, Nuber of saved data: %d\n", LCount(&list));
    // print all saved data
    if(LFirst(&list, &data))
    {
        printf("%d ", data);
        while(LNext(&list, &data))
        {
            printf("%d ", data);
        }
    }
    printf("\n\n");

    return 0;
}

