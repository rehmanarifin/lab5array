#include<stdio.h>
int main(){
 int first[2][3];
 int sec[3][2];

 printf("Enter matrix elements: ");

 for (int i = 0; i < 2; i++) {
  for (int j = 0; j < 3; j++) {
   scanf("%d", &first[i][j]);
  }
 }

 for (int i = 0; i < 2; i++){
  for (int j = 0; j < 3; j++){
   sec[j][i] = first[i][j];
  }
 }

  for (int i = 0; i < 3; i++) {
   for (int j = 0; j < 2; j++) {
    printf("%d ", sec[i][j]);
  }
  printf("\n");
 }
 return 0;
}
