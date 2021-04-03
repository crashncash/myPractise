#include <stdlib.h>
#include <stdio.h>	
typedef struct Node
{
    int data;
    struct Node* next;
}Node;

Node* insert(Node *head,int data)
{
    //Complete this function
    Node *headRef = head;
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    if(head==NULL)
    {
        head = newNode;
        return head;
    }
    else
    {
        while(head->next!=NULL)
        {
            head = head->next;
        }
        head->next = newNode;
        return headRef;
    }
    
}

void display(Node *head)
{
	Node *start=head;
	while(start)
	{
		printf("%d ",start->data);
		start=start->next;
	}
}
int main()
{
	int T,data;
    scanf("%d",&T);
    Node *head=NULL;	
    while(T-->0){
        scanf("%d",&data);
        head=insert(head,data);
    }
  display(head);
		
}
