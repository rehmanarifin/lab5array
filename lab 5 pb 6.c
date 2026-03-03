#include<stdio.h>
int main(){
 int size;
 printf("Enter array size: ");
 scanf("%d", &size);

 int data[size];
 for (int i = 0; i < size; i++){
   scanf("%d", &data[i]);
 }

 printf("Your values:\n");

 for (int j = 0; j < size; j++){
  printf("%d\n", data[j]);
 }

 return 0;
}
