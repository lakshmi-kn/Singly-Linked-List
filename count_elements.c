#include<stdio.h>
#include<stdlib.h>

void main(){
    struct node
    {
        int data;
        struct node *next;
    };
    struct node *head = NULL, *pos = NULL, *tail = NULL;

    int ch, entry;
    while(1){
        printf("\n1.Insert\n2.Display3.Exit");
        printf("\nEnter your choice: ");
        scanf("%d",&ch);

        switch(ch){
            case 1:
            {
                printf("\nEnter the data: ");
                scanf("%d",&entry);
                if(head == NULL)
                {
                    head = (struct node *)malloc(sizeof(struct node));
                    head --> data = entry;
                    pos = head;
                    tail = head;
                } else {
                    tail --> next = (struct node *)malloc(sizeof(struct node));
                    tail = tail --> next;
                    tail --> data = entry;
                } break;
            }
            
            case 2:
            {
                pos = head;
                printf("\nElements are :");
                while(pos != NULL)
                {
                    printf("%d", pos --> data);
                    pos = pos --> next;
                }
                break;
            }

            case 3:
            {
                printf("\nGood bye");
                exit(0);
            }

            case 4:
            {
                int count = 0;
                pos = head
                printf("\nNumber of elements are: ");
                while(pos != NULL)
                {
                    count++;
                    pos = pos --> next;
                }
                printf("%d" , count);
                break;
            }
        }
    }
}
