/*
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
  int a, b;
  char *represent[10] = {"zero", "one", "two",   "three", "four",
                         "five", "six", "seven", "eight", "nine"};
  scanf("%d\n%d", &a, &b);
  for (int i = a; i <= b; i++) {
    if (i > 9) {
      if (i % 2 == 0) {
        printf("even\n");
      } else {
        printf("odd\n");
      }
    } else {
      printf("%s\n", represent[i]);
    }
  }
  return 0;
}
 */
/* #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int n;
   int sum =0;
   int newvalue;
   scanf("%d", &n);
   //Complete the code to calculate the sum of the five digits on n.
  while (!=n)
  {
    newvalue = n % 10;
    sum = sum + newvalue;
  }
  printf("%d",sum);
   return 0;
} */
/*
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int max_and =0;
  int max_or = 0;
  int max_xor = 0;
  int i,j;

  for(i=0 ; i < n ; i++)
  {
      for (j = i+1 ; j < n; j++) {
      int x = i & j,  y = i | j, z = i ^ j;

      if ( x < k && x > max_and)
      {
          max_and = x;
      }
      if(y < k && y > max_or)
      {
          max_or = y;
      }
      if(z < k && k > max_xor){
          max_xor = z;
      }
      }
  }
  printf("%d\n%d\n%d\n",max_and,max_or,max_xor);
}

int main() {
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}
 */
#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  int len = n * 2 - 1;
  for (int i = 0; i < len; i++) {
    for (int j = 0; j < len; j++) {
      int min = i < j ? i : j;
      min = min < len - i ? min : len - i - 1;
      min = min < len - j - 1 ? min : len - j - 1;
      printf("%d ", n - min);
    }
    printf("\n");
  }
  return 0;
}