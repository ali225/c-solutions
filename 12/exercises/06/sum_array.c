#include <stdio.h>

int sum_array( int a[] , int n);

int main()
{
    int b[5] = {10,28,43,54,5};
    int sum=0;

   sum = sum_array(b, 5);

    printf("the sum array : %d", sum);
}

int sum_array( int a[], int n)
{
    int i, sum;

    sum = 0;
    for (i = 0; i < n; i++)
        sum += a[i];
    return sum;
}