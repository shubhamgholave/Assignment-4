# Assignment4.c
/*Name : Shubham Santosh Gholave
Roll no : SYITA139*/

#include <stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
    int roll;
    int prn;
    char name[20];
    struct node *next;
    
};
struct node* create()
{
  struct node * head;
  int p,r;
  char na[20];
  head=(struct node *)malloc(sizeof(struct node ));
  printf("Enter ur prn_no,roll_no and name\n");
  scanf("%d%d%s",&p,&r,na);
  head->prn=p;
  head->roll=r;
  strcpy(head->name,na);
  head->next =NULL;
  return head;
}
void add(struct node *head)
{
  int a;
  struct node *temp,*q;
  q=head;
  printf("How many members u want to add\n");
  scanf("%d",&a);
  for(int i=0;i<a;i++)
  {
    temp=(struct node *)malloc(sizeof(struct node));
    printf("Enter ur prn-no,roll_no and name\n");
    scanf("%d %d %s",&temp->prn,&temp->roll,temp->name);
    q->next=temp;
    q=temp;
  }

}
void display(struct node *head)
{
  while(head!=NULL)
  {
    printf("\nprn_no=%d\n",head->prn);
    printf("roll_no=%d\n",head->roll);
    printf("name=%s\n",head->name);
    head=head->next;
  }
}
void delp(struct node *head)
{
  struct node *q;
  q=head->next;
  free(head);
}
void adds(struct node * head)
{
struct node *s;
char ja[30];
s=(struct node *)malloc(sizeof(struct node));
printf("Enter prn-no,roll-no and name\n");
scanf("%d%d",&s->prn,&s->roll);
scanf("%s",ja);
strcpy(s->name,ja);
while(head!=NULL && head->next!=NULL)
{
head=head->next;
}
head->next=s;
s->next=NULL;

}
void dels(struct node *head)
{
  while(head!=NULL&& head->next!=NULL)
  {
    head=head->next;
  }
  free(head);
}
void delm(struct node *head)
{ int n;
struct node *p;


printf("Enter the prn no to delete the node\n");
scanf("%d",&n);

while(head->prn!=n)
{
  p=head;
  head=head->next;    
  
}

p->next=head->next;
free(head);

}



int main()
{   
  int a;
    char ch;
    struct node *head;
  do{
  printf("\n1)Add president\n2)Add member\n3)Add secratery\n4)Delete president\n5)Delete secratery\n6)Display\n7)Exit\n8)Delete member\n");
  printf("Enter your choice : ");
  scanf("%d",&a);
  switch(a)
  {
    case 1:
    head=create();
    break;
    case 2:
    add(head);
    break;
    case 3:
    adds(head);
    break;
    case 4:
    delp(head);
    break;
    case 5:
    dels(head);
    break;
    case 6:
    display(head);
    break;
    case 8:
    delm(head);
    break;

  }

  }while(a!=7);

}
