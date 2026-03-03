#include <stdio.h>
int main()
{
 int n;
 float avg;
 float sum = 0;
 printf("Number of elements: ");
 scanf("%d", &n);

 int arr[n];

 printf("Enter Array Elements:\n");
 for (int i = 0; i < n; i++)
 {
  scanf("%d", &arr[i]);
  sum += arr[i];
 }
 avg = sum / n;

 printf("Avg = %.1f\n", avg);

 return 0;
}
