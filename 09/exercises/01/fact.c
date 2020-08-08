#include <stdio.h>

int fact(int a);
int main(void) {
  int f;
  printf("enter pleas number of fact \n");
  f = fact(3);
  printf("the fact = %d", f);
  return 0;
}

int fact(int a) { return a <= 1 ? 1 : a * fact(a - 1); }