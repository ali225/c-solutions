#include <stdio.h>
#define Max_value 80

void encypt(char *massge ,int shift);

int main(void)
{
 char c, sentec[Max_value] = {0};
 int i,n;

 printf("Enter the string now :");
 for(i=0;(c=getchar()) != '\n'&& i<Max_value;i++)
    sentec[i]=c;

 printf("Enter the number shift [1-25]");
 scanf("%d",&n);

 encypt(sentec,n);
 printf("the string encypt is :%s",sentec);

 return 0;
}

void encypt(char *massge ,int shift)
{
      while(*massge)
      {
      if(*massge >= 'A' && *massge<= 'Z')
      {
        *massge = ((*massge-'A') + shift ) %26 + 'A';
      }
      else if(*massge >= 'a' && *massge<= 'z')
      {
      *massge = ((*massge-'a') + shift ) %26 + 'a';
      } 
      massge++;
      }
}