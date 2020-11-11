#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int pop(void);
struct node{
 int data;
 struct node *next;
};

static struct node *top = NULL;

bool is_empty(void)
{
 return top == NULL;
}

void make_empty(void)
{ 
  while(!is_empty())
    pop();
}

void push(int i){
   struct node *new_node = malloc(sizeof(struct node));
   if(new_node == NULL)
      printf("Erro of push");

   new_node->data =i;
   new_node->next = top;
   top = new_node;   
}

int pop(void)
{
   struct node *old_node;
   int i;

   if (is_empty())
      printf("is empty not used pop");

   old_node = top;
   i = top->data;
   top = top->next;
   free(old_node);     
   printf("the pop = %d", i);
   return i;
}

void main(void)
{
    push(10);
    push(20);
    push(30);
    push(40);
   
   printf("%d ", top->data);
   printf("%x",top->next);
}