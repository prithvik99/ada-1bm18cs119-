#include <stdio.h>
#include<time.h>
void sort(int a[], int n) {
    int i = 0, j = 0, tmp;
    for (i = 0; i < n; i++) 
    {   
        for (j = 0; j < n - i - 1; j++)
         { 
            if (a[j] > a[j + 1])
            { 
                tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
    }
}
int main() {
  int a[100], n, i;
  clock_t start, end;
  double time_used;
  printf("Enter number of elements in the array:\n");
  scanf("%d", &n); 
  printf("Enter %d elements\n", n);
  for (i = 0; i < n; i++)
    scanf("%d", &a[i]);
    start=clock();
  sort(a, n);
  printf("The sorted Array is:\n");
  for (i = 0; i < n; i++)
     printf("%d\n", a[i]);
     end=clock();
     time_used=1000000*((double)(end-start))/CLOCKS_PER_SEC;
     printf("Time used: %f", time_used);
  return 0;
}
