#include <stdio.h>

void swap(int *p , int *d);

int main()
{
    int x = 10;
    int y = 20;
    
    printf("the x =%d and y=%d \n", x, y);
    swap(&x,&y);
    printf("the x =%d and y=%d \n", x, y);

}
void swap(int *p, int *d)
{
    int temp = *p;
    *p = *d;
    *d = temp;
}