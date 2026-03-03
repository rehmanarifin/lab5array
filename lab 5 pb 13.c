#include<stdio.h>
int main(){
 int mat1[2][2], mat2[2][2];
 int res[2][2];

 printf("Matrix A: ");
 for (int i = 0; i < 2; i++) {
  for (int j = 0; j < 2; j++) {
   scanf("%d", &mat1[i][j]);
  }
 }

 printf("Matrix B: ");
 for (int i = 0; i < 2; i++) {
  for (int j = 0; j < 2; j++) {
   scanf("%d", &mat2[i][j]);
  }
 }
 for (int i = 0; i < 2; i++) {
  for (int j = 0; j < 2; j++) {
   res[i][j] = mat1[i][j] + mat2[i][j];
  }
 }
 printf("Resultant Matrix:\n");
 for (int i = 0; i < 2; i++) {
  for (int j = 0; j < 2; j++) {
   printf("%d ", res[i][j]);
  }
   printf("\n");
 }

 return 0;
}
