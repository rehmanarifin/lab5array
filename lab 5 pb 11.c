#include <stdio.h>
int main() {
 int r, c;
 scanf("%d %d", &r, &c);
 int data[r][c];

 printf("Enter %d elements: ", r*c);

 for (int i = 0; i < r; i++) {
  for (int j = 0; j < c; j++) {
   scanf("%d", &data[i][j]);
  }
 }

 int max = data[0][0];

 for (int i = 0; i < r; i++) {
  for (int j = 0; j < c; j++) {
   if (data[i][j] > max) {
    max = data[i][j];
   }
  }
 }
 printf("Maximum element = %d\n", max);
 return 0;
}
