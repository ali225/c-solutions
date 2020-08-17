#include <stdio.h>

int string_length(char *name);

int main(void)
{
    char * name = "Hello My name Ali Gamal ";

    printf("the length os %d", string_length(name));

    return 0;
}


int string_length(char *name){

    int x = 0; 

    while(*name !='\0'){
      x++;
      name++;
    }

    return x;
}