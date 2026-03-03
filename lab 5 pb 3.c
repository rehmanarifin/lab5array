#include<stdio.h>
int main(){
 int size;
 printf("Enter array size: ");
 scanf("%d", &size);

 int data[size];
 for (int i = 0; i < size; i++){
   scanf("%d", &data[i]);
 }

 printf("Your elements: ");
 for (int j = 0; j < size; j++){
   printf("%d ", data[j]);
 }

 printf("\n");

 for (int j = 0; j < size; j++){
  printf("a[%d]=%d\n", j, data[j]);
 }

 return 0;
}
