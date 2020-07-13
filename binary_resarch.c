#include <stdio.h>
#define size 20
void main(void) {
  int data[size];
  int i, n, key, pos;
  int lower, upper, mid;

  printf("please Enter size of array : ");
  scanf("%d", &n);

  for (i = 0; i < n; i++) {
    printf("Enter value[%d] of array :", i);
    scanf("%d", &data[i]);
  }

  printf("pleas enter key :");
  scanf("%d", &key);

  pos = -1;

  /*algorthem search of array using of binary resarch */
  lower = 0;
  upper = n - 1;

  do {
    mid = (lower + upper) / 2;

    if (key == data[mid]) {
      pos = mid;
      break;
    } else if (key > data[mid]) {
      lower = mid + 1;
    } else {
      upper = mid - 1;
    }

  } while (lower <= upper);

  if (pos != -1)
    printf("The Key is located = %d", pos);
  else
    printf("the key is not located = %d", key);
}