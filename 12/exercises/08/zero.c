#include <stdio.h>

/* void sort_zero(int a[], int n)
{
  int i;
  for (i=0; i < n; i++)
  {
   a[i] = 0;
  }
} */
void sort_zero(int a[], int n)
{
    int *p;

    for(p=a ; p < a + n; p++)
        *p= 0;
}

int main()
{  
   int i;
   int b[5] = {34,65,67,78,6};

   for (i=0 ; i < 5; i++)
   {
    printf("the befor print array %d\n",b[i]);
   } 
   sort_zero(b,5);
   
   for (i=0; i<5 ; i++)
   {
    printf("after array :%d\n",b[i]);
   }

   return 0;
}