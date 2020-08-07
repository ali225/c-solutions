#include <stdio.h>

int main(void) {
  int i, a = 0, b = 1, n, result;

  printf("Enter the number : ");
  scanf("%d", &n);

  for (i = 1; i < n; i++) 
  {
    printf("%d\n", a);
    result = a + b;
    a = b;
    b = result;
  }
 return 0; 
}