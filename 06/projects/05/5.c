#include <stdio.h>

int main(void) {

    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    printf("Digits reversed: ");

    while (n != 0)
    {
        printf("%d", n % 10);
        n /= 10;
    }
    printf("\n");

    return 0;
}

