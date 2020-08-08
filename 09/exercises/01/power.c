#include <stdio.h>

int power(int a, int x);
int main(void) {
  int p;
  printf("enter pleas number of power \n");
  p = power(5, 3);
  printf("the fact = %d", p);
  return 0;
}

int power(int a, int x) { return x == 0 ? 1 : a * power(a, x - 1); }