#include <stdio.h>

void main(void)
{
   int data[] = {23,5,6,76,6,54,54,75,75,76,734,56};
   int size;
   int i,j;
   size = sizeof(data) / sizeof(data[0]);

   printf("The data of array \n");
   printf("======================\n");

   for(i=0 ; i<size; i++)
   {
    printf("value[%d] of array=%d \n",i,data[i]);
   }

     /*algorthem selction sort*/

     for(i=0; i<size-1; i++)
     {
       for(j=i+1; j <size; j++)
       {
          if(data[i] > data[j])
          {
            int temp;
            temp = data[i];
            data[i] = data[j];
            data[j] = temp;
          }
       }
     }

     
   printf("The data of array \n");
   printf("======================\n");

   for(i=0 ; i<size; i++)
   {
    printf("value[%d] of array=%d \n",i,data[i]);
   }
}