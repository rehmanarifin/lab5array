#include <stdio.h>
int main()
{
 int n;
 printf("Number of elements: ");
 scanf("%d", &n);

 int arr[n];

 printf("Enter Array Elements:\n");
 for (int i = 0; i < n; i++)
 {
   scanf("%d", &arr[i]);
 }

 int max = arr[0];

 for (int i = 1; i < n; i++) {
  if (arr[i] > max) {
   max = arr[i];
  }
 }

 printf("Maximum: %d\n", max);

 return 0;
}
