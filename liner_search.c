#include <stdio.h>
#define Z 6
void main(void) {
  int data[Z];
  int i, pos, n, key;

  printf("Enter the Size of array : ");
  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    printf("please enter value [%d] : ", i);
    scanf("%d", &data[i]);
  }
  printf("====================\n");
  printf("Enter search Key :");
  scanf("%d", &key);
  printf("====================\n");
  pos = -1;
  for (i = 0; i < n; i++) {
    if (key == data[i]) {
      pos = data[i];
      break;
    }
  }
  if (pos != -1) {
    printf("the value of key that : %d", pos);
  } else {

    printf("the value of not that : %d", key);
  }
}