#include <stdio.h>
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

  /* algorithm of instat of array*/

  for (i = pos; i < n - 1; i++) {
    data[i] = data[i + 1];
  }
  n--;
  for (i = 0; i < n; i++) {
    printf("value[%d] is = : %d \n", i, data[i]);
  }
}