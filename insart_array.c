/* #include <stdio.h>
#define SZIE 20

void main(void) {
  int data[SZIE];
  int i, n, newvalue, pos;

  printf("please Enter size of array > 20 = ");
  scanf("%d", &n);

  for (i = 0; i < n; i++) {
    printf("Value of [%d]", i);
    scanf("%d", &data[i]);
  }
  printf("please enter new value ");
  scanf("%d", &newvalue);

  printf("please Enter pos ");
  scanf("%d", &pos);

  /* algorithm of instat of array*/
/*
for (i = pos; i >= n - 1; i--) {
  data[i + 1] = data[i];
}
data[pos] = newvalue;
n++;
for (i = 0; i < n - 1; i++) {
  printf("value[%d] is = : %d \n", i, data[i]);
}
} */

#include <stdio.h>
#define SIZE 10

void main(void) {
  int data[SIZE];
  int i, pos, n, newvalue;

  printf("please Enter size of array > 20 = ");
  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    printf("please enter value [%d] :", i);
    scanf("%d", &data[i]);
  }
  // algorithem  delet of array any postion

  printf("please enter new value ");
  scanf("%d", &newvalue);

  printf("please enter postion :");
  scanf("%d", &pos);
  for (i = pos; i >= n - 1; i--) {
    data[i + 1] = data[i];
  }
  data[pos] = newvalue;
  n++;
  for (i = 0; i < n; i++) {
    printf("value[%d] is = : %d \n", i, data[i]);
  }
}