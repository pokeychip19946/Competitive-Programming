#include <bits/stdc++.h>
using namespace std;
#ifndef ONLINE_JUDGE
#define freopen freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#else
#define freopen 
#endif

struct node
{
  int data;
  struct node *next;
};


// insert case 1
struct node * insertatfirst(struct node *head, int data)
{
  struct node *ptr = (struct node *)malloc(sizeof(struct node));
  ptr->data=data;
  ptr->next=head; 
  return ptr;
}

// insert case 2
struct node *insertatindex(struct node *head, int data, int index)
{
  struct node *ptr=(struct node *)malloc(sizeof(struct node));
  struct node *p=head;
  int i=0;
  while(i!=index-1)
  {
    p=p->next;
    i++;
  }
  ptr->data=data;
  ptr->next=p->next;
  p->next=ptr;
  return head;
}
// insert case 3
struct node *insertatend(struct node *head, int data)
{
  struct node *ptr=(struct node *)malloc(sizeof(struct node));
  struct node *p=head;
  while(p->next!=NULL)
  {
    p=p->next;
  }
  ptr->data=data;
  p->next=ptr;
  ptr->next=NULL;
  return head;
}



void travarsal(struct node *ptr)
{
  while(ptr!=NULL)
  {
    cout<<ptr->data<<endl;
    ptr=ptr->next;
  }
}

int main()
{
  freopen;
  struct node *head, *second, *thrid;
  head=(struct node *)malloc(sizeof(struct node));
  second=(struct node *)malloc(sizeof(struct node));
  thrid=(struct node *)malloc(sizeof(struct node));


  head->data=7;
  head->next=second;

  second->data=10;
  second->next=thrid;
  
  thrid->data=15;
  thrid->next=NULL;

  head = insertatfirst(head, 5);
  head = insertatindex(head, 9, 2);
  head = insertatend(head, 20);
  travarsal(head);

}

