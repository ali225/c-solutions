#include <stdio.h>
int stringlength(char *string);

int main() {

  char *name = "Eng Ali Gamal Aziz";

  printf("the length word %d", stringlength(name));

  return 0;
}

int stringlength(char *string) {
  int x = 0;

  while (*string != '\0') {
    x++;
    string++;
  }
  return x;
}