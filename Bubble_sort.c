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
#define Z 10
#define TRUE 1
#define FALSE 0
void main(void) {
  int data[Z];
  int i, n, sorted;

  printf("Enter size array :");
  scanf("%d", &n);

  for (i = 0; i < n; i++) {
    printf("Value[%d] of Array = ", i);
    scanf("%d", &data[i]);
  }
  printf("=====================\n");
  printf("Befor that of array ");
  printf("=====================\n");

  for (i = 0; i < n; i++) {
    printf("Value[%d] of Array = %d\n", i, data[i]);
  }

  do {
    sorted = TRUE;
    for (i = 0; i < n - 1; i++) {
      if (data[i] > data[i + 1]) {
        int temp;
        temp = data[i];
        data[i] = data[i + 1];
        data[i + 1] = temp;
        sorted = FALSE;
      }
    }

  } while (!sorted);

  printf("=====================\n");
  printf("After  that of array ");
  printf("=====================\n");

  for (i = 0; i < n; i++) {
    printf("Value[%d] of Array = %d\n", i, data[i]);
  }
}