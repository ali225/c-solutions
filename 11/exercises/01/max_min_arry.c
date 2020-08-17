#include <stdio.h>

#define N 5

void max_mine_arry(int a[], int n, int *max, int *mine);

int main(void)
{
   int b[N] , i , big , small;

   printf("pleas enter the arry \n :");
   for(i=0; i < N; i++)
   {
    scanf("%d",&b[i]);
   }

   max_mine_arry(b,N,&big,&small);

   printf("the max of array : %d\n",big);
   printf("the mine of array : %d\n",small);

   return 0; 
}

void max_mine_arry(int a[], int n, int *max, int *mine)
{
    int i;
    *max = *mine = a[0];
    for(i=0; i <N; i ++)
    {
     if(a[i] > *max)
     {
      *max = a[i];
     }else if(a[i] < *mine)
     {
       *mine = a[i];
     }
    }

}
