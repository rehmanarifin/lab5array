#include<stdio.h>
int main(){
 int size;
 printf("Enter array size: ");
 scanf("%d", &size);

 int data[size];
 for (int i = 0; i < size; i++){
   scanf("%d", &data[i]);
 }

 int sum=0;
 for (int j = 0; j < size; j++){
  sum+= data[j];
 }
  printf("Sum: %d\n", sum);

 return 0;
}
