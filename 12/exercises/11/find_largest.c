#include <stdio.h>

int find_largest(int a[], int n)
{
    int *p = a;
    int largest = *p++;
    while(p++ < a + n)
    {
       if(*p > largest)
       {
            largest = *p;
       }     
    }
    return largest;
}

int main()
{  
   int i;
   int b[5] = {34,65,67,78,6};
   int x;

   x = find_largest(b,5);

   printf("after array :%d\n",x);
   
   return 0;
}