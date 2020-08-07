#include <stdio.h>

int main(void) {
  int i, fib_numbers[40] = {0, 1};

  for (i = 2; i < (int)(sizeof(fib_numbers) / sizeof(fib_numbers[0])); i++) {
    fib_numbers[i] = fib_numbers[i - 1] + fib_numbers[i - 2];
  }

  for (i = 0; i < (int)(sizeof(fib_numbers) / sizeof(fib_numbers[0])); i++) {
    printf("%d\n", fib_numbers[i]);
  }
  return 0;
}