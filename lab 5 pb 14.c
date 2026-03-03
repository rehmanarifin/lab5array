#include <stdio.h>
int main() {
 int marks[4][3];
 float average;

 for (int i = 0; i < 4; i++) {
   printf("Marks of student %d: ", i + 1);
    for (int j = 0; j < 3; j++) {
     scanf("%d", &marks[i][j]);
  }
 }

 printf("\n");

 for (int i = 0; i < 4; i++) {
  int sum = 0;
   for (int j = 0; j < 3; j++) {
    sum += marks[i][j];
  }
  average = sum / 3.0;
  printf("Average marks for student %d: %.2f\n", i + 1, average);
 }
 return 0;
}
