#include <stdio.h>

int main() {
  int a, b;
  printf("Введите число а");
  scanf("%d", &a);
  printf("Введите число в");
  scanf("%d", &b);
  if(a + b == 13) {
    printf("13");
  } else {
    printf("%d", a - b);
  }
  return 0;
}
