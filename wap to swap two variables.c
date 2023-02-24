#include<stdio.h>
int main() {
  int a,b,c;
  printf("Enter a: ");
  scanf("%d", &a);
  printf("Enter b: ");
  scanf("%d", &b);

  
  c=a;
  a=b;
  b=c;

  printf("A : exchange digit %d\n" ,a);
  printf("B : exchange digit %d" ,b);

  return 0;
}

