

/* #include <stdio.h>
#define TRUE 1
#define FALSE 0
void main(void)
{
   int data[] = {23,5,6,76,6,54,54,75,75,76,734,56};
   int size;
   int i,j, sorted;
   size = sizeof(data) / sizeof(data[0]);

   printf("The data of array \n");
   printf("======================\n");

   for(i=0 ; i<size; i++)
   {
    printf("value[%d] of array=%d \n",i,data[i]);
   }

     /*algorthem selction sort using bubble sort*/
/*
     do
     {  sorted = TRUE;
       for(i=0 ; i < size-1; i++)
       {
        if(data[i] > data[i+1])
        {
         int temp;
         temp = data[i];
         data[i] = data[i+1];
         data[i+1] = temp;
         sorted =FALSE;
        }
       }

     }while(!sorted);

   printf("The data of array \n");
   printf("======================\n");

   for(i=0 ; i<size; i++)
   {
    printf("value[%d] of array=%d \n",i,data[i]);
   }
} */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

https://github.com/OWASP/QRLJacking

int main() 
{
    int a, b;	
    scanf("%d\n%d", &a, &b);
     char *data[] = {"zero","one","two","three","four","Five","six","seven","eight","nine","ten"};
     int i=0;
  	// Complete the code.
    //  for(int i = 0; i < 10; i++) {
        if (a == *data[i])
        {
         printf("%s\n",*data[i]);
      //  }
       
    }

    return 0;
}

