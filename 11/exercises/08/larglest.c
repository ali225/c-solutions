#include <stdio.h>

int *find_largest(int a[], int n);

int main()
{
    int *x;
    int b[5] = {10,3,56,80,5};
    int y;
   x = find_largest(&b[5],5);

   printf("the largest = %d",x);
  
   return 0;
 
}

int *find_largest(int a[], int n)
{
    int i;
    int *largest =&a[0];

    for(i = 1 ; i < n ; i++)
    {
     if(a[i] > *largest)
     {
      largest = &a[i];
     }
    }
    return largest;
}