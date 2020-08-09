#include <stdio.h>

int power(int x, int n);

int main(void) {
  int p;
  printf("The power of that ");
  p = power(5, 3);
  printf("the is : %d", p);
}
int power(int x, int n) { return n == 0 ? 1 : x * power(x, n - 1); }