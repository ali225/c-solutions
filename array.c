#include <stdio.h>
#define MAXSIZE  5

int sum(int a[] , int n);
int max(int b[] , int n);

void main(void)
{
   int day[MAXSIZE]={34,5,65,76,7};
   int res_1;
   int res_2;

    res_1 = sum(day,MAXSIZE);
    res_2 = max(day,MAXSIZE);

    printf("sum of array = %d\n",res_1);
    printf("Max value in array = %d\n",res_2);
   //int n,i,sum,max,size;
  /*  i=0;
   do
   {
      if(i <= MAXSIZE)
      {
      printf("day[%d]:",i);
      scanf("%d",&day[i]);
      }
      else
      {
        printf("greater than size \n");
        break;
      }
   }while(day[i++] > 0);
    n = i-1;
    printf("%d\n",n);

    size = sizeof(day)/sizeof(day[0]);
    printf("the size is array =%d\n",size); 
    /*get sum of array */
   /* sum=0;
    for(i=0 ; i<n ; i++)
    {
     sum = sum +day[i];
    }
    printf("average of this days is %f\n",(float)sum/n);

    max = -1000;
    for(i=0 ; i<n ; i++)
    {
     if(day[i]>max)
     max = day[i];
    }
    printf("the max days = %d\n",max);
    printf(" data stored in array is \n");
    for(i=0; i < n; i++)
    {
       printf("Value in position %d is = %d\n",i+1,day[i]);
    } */
}

int sum(int a[] , int n)
{  
    int sum =0;
    int i;

    for(i=0 ; i < n; i++)
    {
     sum = sum +a[i];
    }
    return sum;

}

int max(int b[] , int n)
{
   int max;
   int i;
   max = b[0];

   for(i=1; i < n; i++)
   {
    if(b[i] > max)
    {
     max = b[i];
    }
   }
   return max;

}