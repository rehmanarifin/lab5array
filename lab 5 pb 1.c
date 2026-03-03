#include<stdio.h>
int main(){
 int data[5] = {10,20,30,40,50};

 for (int i = 0; i < 5; i++)
 {
  printf("%d", data[i]);

  if (i < 4) {
   printf(", ");
  }
 }

 return 0;
}
