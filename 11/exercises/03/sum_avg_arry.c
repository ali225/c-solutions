#include <stdio.h>
#define N 5

void sum_avg_arry(double a[], int n, double *sum, double *avg);
int main(void)
{
    int i;
    double a[N], Sum,Avg;

    for(i=0; i<N; i++)
    {
      printf("Enter plesa arry : \n ");
      scanf("%f",&a[i]);
    }
    sum_avg_arry(a,N,&Sum,&Avg);
    printf("the Sum is :%f\n",Sum);
    printf("the Avg is :%f\n",Avg);
    
    return 0;
}
void sum_avg_arry(double a[], int n, double *sum, double *avg)
{
    int i; 
    *sum = 0.0;
    for(i=0; i<n;i++)
     *sum += a[i];
    
    *avg = *sum / n; 
}