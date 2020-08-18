#include <stdio.h>

#define N 10

int main()
{
int a[N] = {10,9,8,7,6,5,4,3,2,1};
int *p = &a[0], *q = &a[N-1], temp;

while (p < q) {
    temp = *p;
    *p++ = *q;
    *q-- = temp;
      printf("the %d \n",temp);
}

  return 0;
}