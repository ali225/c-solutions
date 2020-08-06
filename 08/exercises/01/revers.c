#include <stdio.h>

#define N 10

int main(void) {

  int i, arr[N];

  printf("Enter %d Number : ", N);
  for (i = 0; i < N; i++) {
    scanf("%d", &arr[i]);
  }

  printf("Enter the rever of array \n");
  for (i = N - 1; i >= 0; i--) {
    printf("%d\n", arr[i]);
  }
  return 0;
}