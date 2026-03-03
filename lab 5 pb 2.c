#include <stdio.h>
int main() {
 int year[4];
 int i = 0;

 while (i < 4) {
  scanf("%d", &year[i]);
   if (year[i] % 2 == 0) {
    i++;
  } else {
   printf("Please enter even year\n");
  }
 }
 printf("\n");

 for (int k = 0; k < 4; k++) {
  printf("%d\n", year[k]);
 }
 return 0;
}
