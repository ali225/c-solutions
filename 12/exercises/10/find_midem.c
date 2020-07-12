#include <stdio.h>

int *find_middle(int a[], int n)
{
    return a + n / 2;
}

int main()
{  
   int i;
   int b[5] = {34,65,67,78,6};
   int *x;
  
   x = find_middle(b,5);
   
    printf("after array :%d\n",*x);
   

   return 0;
}