#include<stdio.h>
#include<stdlib.h>

struct ListNode
{
    int val;
    struct ListNode* next;
};
void display(struct ListNode *head);
struct ListNode* insert(struct ListNode *head);
struct ListNode* delete(struct ListNode *head);
struct ListNode* insertfront(struct ListNode *head);
struct ListNode* reverseList(struct ListNode* head);
struct ListNode* insertfront1(struct ListNode *head);

int main()
{
    struct ListNode *head=NULL;
    head=insert(head);
    head=insert(head);
    head=insert(head);
    head=insert(head);
    head=insert(head);
    head=insertfront(head);
    head=insertfront1(head);
    head=insertfront1(head);
    display(head);
    return 0;
}
struct ListNode* delete(struct ListNode *head)
{
    head = head->next;
    return head;
}
struct ListNode* insertfront(struct ListNode *head)
{
    struct ListNode *newnode;
    newnode = (struct ListNode*) malloc(sizeof(struct ListNode));
    printf("enter the val : ");
    int n;
    scanf("%d",&n);
    newnode->val = n;
    newnode->next=head;
    head=newnode;
    return head;
}
struct ListNode* insertfront1(struct ListNode *head)
{
    struct ListNode *newnode;
    newnode = (struct ListNode*) malloc(sizeof(struct ListNode));
    printf("enter the val : ");
    int n;
    scanf("%d",&n);
    newnode->val = n;
    if(head==NULL)
    {
        newnode->next=NULL;
        head=newnode;
    }
    else
    {
        newnode->next=head;
        head=newnode;
    }
    
    return head;
}
void display(struct ListNode *head)
{
    if(head==NULL)
    {
        printf("LIst is empty\n");
    }
    struct ListNode *temp;
    temp=head;
    while(temp->next!=NULL)
    {
        printf("%d --> ",temp->val);
        temp = temp->next;
    }
    printf("%d --> NULL\n",temp->val);
}
struct ListNode* insertBack( int n1)
{
    struct ListNode *temp,*newnode,*head1=NULL;
    newnode = (struct ListNode*) malloc(sizeof(struct ListNode));
    newnode->val=n1;
    if(head1==NULL)
    {
        newnode->next=NULL;
        head1=newnode;
    }
    else
    {
        newnode->next=head1;
        head1=newnode;
    }
    
    return head1;
    
}
struct ListNode* reverseList(struct ListNode* head)
{
    struct ListNode *temp = head,*newnode;  
    newnode = (struct ListNode*) malloc(sizeof(struct ListNode));
    while(temp!=NULL)
    {
        head=insertBack(temp->val);
        temp = temp->next;
    }
    return head;
}
struct ListNode* insert(struct ListNode *head)
{
    struct ListNode *temp,*newnode;
    newnode = (struct ListNode*) malloc(sizeof(struct ListNode));
    printf("enter the val : ");
    int n;
    scanf("%d",&n);
    newnode->val = n;
    newnode->next =NULL;
    if(head==NULL)
    {
        head = temp = newnode;
    }
    else
    {
        temp->next=newnode;
        temp=newnode;
    }
    return head;
}