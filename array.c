#include <stdio.h>
#define SIZE 5

int sum_arr(int a[], int n);
int max_arr(int b[], int n);

void main(void) {

  int data[SIZE];
  int i, sum, max;

  for (i = 0; i < SIZE; i++) {
    printf("please enter of array value[%d]: ", i);
    scanf("%d", &data[i]);
  }
  printf("=======================\n");
  printf("the array data that \n");
  printf("=======================\n");
  for (i = 0; i < SIZE; i++) {
    printf("please enter of array value[%d]: %d \n", i, data[i]);
  }

  printf("=======================\n");
  printf("the array sum \n");
  printf("=======================\n");
  sum = sum_arr(data, SIZE);
  printf("\t%d\n", sum);
  printf("=======================\n");
  printf("the array max \n");
  printf("=======================\n");
  max = max_arr(data, SIZE);
  printf("\t%d", max);
}

int sum_arr(int a[], int n) {
  int sum = 0, i;
  for (i = 0; i < n; i++) {
    sum = sum + a[i];
  }
  return sum;
}
int max_arr(int b[], int n) {
  int max, i;
  max = b[0];
  for (i = 1; i < n; i++) {
    if (b[i] > max)
      max = b[i];
  }
  return max;
}
