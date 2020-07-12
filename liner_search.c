#include <stdio.h>
#define size 20
void main(void)
{
   int data[size];
   int i,n,key,pos;

   printf("please Enter size of array : ");
   scanf("%d",&n);

   for(i=0 ; i < n ; i++)
   {
    printf("Enter value[%d] of array :",i);
    scanf("%d",&data[i]);
   }

   printf("pleas enter key :");
   scanf("%d",&key);

   pos = -1;
    /*algorthem search liner of array */
   
   for(i=0 ; i < n ; i++)
        if(key == data[i])
        {
         pos = data[i];
         break;
        }
   if(pos != -1)
       printf("The Key is located = %d",pos);
   else 
      printf("the key is not located = %d",key);       
}