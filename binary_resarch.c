/* #include <stdio.h>
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

  //*algorthem search of array using of binary resarch
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
} */
#include <stdio.h>
#define Z 6
void main(void) {
  int data[Z];
  int i, pos, n, key;
  int upper, lower, mid;

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
  //*algorthem search of array using of binary resarch
  pos = -1;
  lower = 0 ,upper = n - 1;
  do {
    mid = (upper + lower) / 2;
    if (key == data[mid]) {
      pos = data[mid];
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