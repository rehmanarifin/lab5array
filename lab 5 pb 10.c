#include<stdio.h>
int main(){
 int data[3][3];

 printf("Enter 9 elements: ");
 for (int i = 0; i < 3; i++) {
  for (int j = 0; j < 3; j++) {
   scanf("%d", &data[i][j]);
  }
 }

 int maximum = data[0][0];

 for (int i = 0; i < 3; i++){
  for (int j = 0; j < 3; j++){
   if(data[i][j] > maximum){
    maximum = data[i][j];
    }
   }
  }
 printf("Maximum element = %d\n", maximum);

 return 0;
}
