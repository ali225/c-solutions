#include <stddef.h> /* offsetof */
#include <stdio.h>

struct s {
    char a;
    int b[2];
    float c;
} s1;

int main(void)
{
    printf("Size of struct char a : %d\n", sizeof(s1.a));
    printf("Size of struct int  b : %d\n", sizeof(s1.b));
    printf("Size of struct float c : %d\n", sizeof(s1.c));
       
    printf("Size of struct s: %d\n", sizeof(s1));
    printf("Size and offset of member a: %d -- %d\n", 
           sizeof(s1.a), offsetof(struct s, a));
    printf("Size and offset of member b: %d -- %d\n",
           sizeof(s1.b), offsetof(struct s, b));
    printf("Size and offset of member c: %d -- %d\n",
           sizeof(s1.c), offsetof(struct s, c));
    return 0;
}
