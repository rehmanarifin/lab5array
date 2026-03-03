#include<stdio.h>
int main(){
 int data[7];

 for (int i = 0; i < 7; i++)
 {
  scanf("%d", &data[i]);
 }

 printf("Inputted values:\n");

 for (int k = 6; k >= 0; k--)
 {
  printf("%d\n", data[k]);
 }
 return 0;
}
