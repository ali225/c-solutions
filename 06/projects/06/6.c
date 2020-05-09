#include <stdio.h>

int main(void) {

    int n, i;

    printf("Enter a number: ");
    scanf("%d",&n);

    for(i = 1 ; i <= n ; i++)
    {
        if (i % 2 !=0)
            continue;
        printf("%d\n",i);    
    }
  /*   printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (i % 2 != 0)
            continue;
        printf("%d\n", i);
    } */

    return 0;
}
