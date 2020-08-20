#include <stdio.h>
#define N 3
int *sum(int a[N], int b[N]);

int main(void)
{
   int i;
   int a[N] = {3,5,6};
   int b[N] = {3,5,10};
   int *c;
   c = sum(a,b);
   
   for(i=0;i<N;i++)
      printf("%d\n",*c++);

   return 0;
}

int *sum(int a[N], int b[N])
{
    int i;
    static int  c[N];

    for(i=0;i<N;i++)
       c[i] = a[i] + b[i];

   return (c);
}