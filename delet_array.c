/* #include <stdio.h>
#define SZIE 20

void main(void) {
  int data[SZIE];
  int i, n, pos;

  printf("please Enter size of array > 20 = ");
  scanf("%d", &n);

  for (i = 0; i < n; i++) {
    printf("Value of [%d]", i);
    scanf("%d", &data[i]);
  }

  printf("please Enter pos ");
  scanf("%d", &pos);

  /* algorithm delet of array*/
/*
 for (i = pos; i < n - 1; i++) {
   data[i] = data[i + 1];
 }
 n--;
 for (i = 0; i < n; i++) {
   printf("value[%d] is = : %d \n", i, data[i]);
 }
} */

#include <stdio.h>
#define SIZE 10

void main(void) {
  int data[SIZE];
  int i, pos, n;

  printf("please Enter size of array > 20 = ");
  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    printf("please enter value [%d] :", i);
    scanf("%d", &data[i]);
  }
  // algorithem  delet of array any postion

  printf("please enter postion :");
  scanf("%d", &pos);
  if (pos < n - 1) {
    for (i = pos; i < n - 1; i++) {
      data[i] = data[i + 1];
    }
    n--;
  } else {
    printf("the data of array\n");
    for (i = 0; i < n; i++) {
      printf("value of array value[%d]:%d\n", i, data[i]);
    }
  }
}