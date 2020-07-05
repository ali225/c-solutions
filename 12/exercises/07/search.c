#include <stdio.h>
#include <stdbool.h>

bool search(int a[], int n, int key);

int main()
{
     int b[6] = {3,4,34,23,3};
     int k=334;
     int x;

     x = search(b,6,k);

     printf("the number is : %d",x);

     return 0;

}

bool search(int a[], int n, int key)
{
     int i;

     for(i=0 ; i < n ; i++)
     {
      if(a[i] == key)
          return true;
     }
     return false;
}