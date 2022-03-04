#include <stdio.h>

#define pi 3.14

int main(void) {
  int r;
printf("Wprowadź promień: ");
  scanf("%d", &r);
  if (r<0) {
    printf("Niepoprawne dane\n");
  }
  else {
    float pole;
    pole=pi*r*r;
    printf("Pole wynosi %f\n", pole);
  }

  return 0;
}