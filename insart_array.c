#include <stdio.h>
#define SIZE 20
void main(void)
{
   int data[SIZE]; 
   int n,i;
   int newvalue;
   int post;

   printf("Enter please size of array < 20: ");
   scanf("%d",&n);

   for(i=0; i < n; i++)
   {
    printf("value[%d]:",i);
    scanf("%d",&data[i]);
   } 

   printf("please new item :");
   scanf("%d",&newvalue);

   printf("please post :");
   scanf("%d",&post);

   /* algoritm to insert a new item in array */

   for(i=n ; i >= post; i--)
   {
     data[i+1] = data[i];
   }

   data[post] = newvalue;
   n++;

   for(i=0 ; i<n; i++)
   {
    printf("value[%d]: is = %d\n",i,data[i]);
  
   }
   
}
