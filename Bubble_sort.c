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

int main() {

  int a, b;
  char *represent[10] = {"zero", "one", "two",   "three", "four",
                         "five", "six", "seven", "eight", "nine"};
  scanf("%d\n%d", &a, &b);
  for (int i = a; i <= b; i++) {

    if (i > 9) {
      if (i % 2 == 0) {
        printf("even\n");
      } else {
        printf("odd\n");
      }
    } else {
      printf("%s\n", represent[i]);
    }
  }
  return 0;
}