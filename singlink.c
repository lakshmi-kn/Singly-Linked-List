#include<stdio.h>
#include<stdlib.h>
void main()
{
	struct node
	{
		int data;
		struct node *next;
	};
	struct node *head=NULL, *pos=NULL, *tail=NULL;
	
	int ch, entry,count,n,flag=0;
	while (1)
	{
		printf("\n1.Insert\n2.Display\n3.Search for an element\n4.Delete\n5.Exit\n");
		printf("\nEnter your choice:\t");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:
			{
				printf("\nEnter data:\t");
				scanf("%d",&entry);
				if(head==NULL)
				{
					head=(struct node *)malloc(sizeof(struct node));
					head->data=entry;
					pos=head;
					tail=head;
				}
				else 
				{
					tail->next=(struct node*)malloc(sizeof(struct node));
					tail=tail->next;
					tail->data=entry;
				}
				break;
			}
			
			case 2:
			{
				pos=head;
				printf("\nElements are:\n");
				while (pos!=NULL)
				{
					printf("%d",pos->data);
					printf("\t\n");
					pos=pos->next;
				}
				break;
			}
			
			case 3:
			{
				pos=head;
				printf("\nEnter element to be searched for:\n");
				scanf("%d",&n);
				while (pos!=NULL)
				{
					if(pos->data==n)
					{
						flag=1;
						break;
					}
					else
					{
						flag=0;
					}
					pos=pos->next;
				}
				if(flag==1)
				{
					printf("Element found\n");
				}
				else
				{
					printf("Element not found\n");
				}
				break;
			}	
			
			case 4:
			{
				struct node *temp=head;
				printf("\nEnter position of data:");
				scanf("%d",&entry);
				if (entry==0)
				{
					head=head->next;
					temp->next=NULL;
					printf("\nData to be deleted is %d",temp->data);
					free(temp);
					printf("\n");
				}
				else
				{
					for(int i=0;i<entry-1;i++)
					{
						temp=temp->next;
					}
					struct node *del=temp->next;
					temp->next=temp->next->next;
					del->next=NULL;
					printf("\nData to be deleted is %d",del->data);
					free(del);
					printf("\n");
				}
				break;
			}
			
			case 5:
			{
				printf("\nGoodbye");
				exit(0);
			}
			
			default:
			{
				printf("Invalid choice");
				break;
			}
		}
	}
}



