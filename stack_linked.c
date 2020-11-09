#include <stdio.h>
#include <stdlib.h>

struct node
{
   int data;
   struct node *link;
};

void main(void)
{
   struct node * top,* ptr;
   int size , i ; 
   
   printf("Enter szie ");
   scanf("%d",&size);
  
  top=NULL;

  for(i=1; i<= size; i++)
  {
     if(top==NULL)
     {
     ptr =(struct node *)malloc(sizeof(struct node));
     top = ptr;
     ptr->link = NULL;
     }
    else
     {
      ptr= (struct node *)malloc(sizeof(struct node));
      ptr->link=top;
      top = ptr;
     }
   if(ptr!=NULL)
   {
    printf("please value[%d]:",i);
    scanf("%d",&ptr->data);
   }
  }
   printf("print in fornt in first time :\n");
   ptr = top;
   
   while(ptr!=NULL)
   {
    printf("%d\n",ptr->data);
    ptr = ptr->link;
   }
   printf("print in fornt in sacnd time :\n");
   ptr = top;

   while(ptr!=NULL)
   {
    printf("%d\n",ptr->data);
    ptr = ptr->link;
   }

   printf("the top is :%d",top->data);
}