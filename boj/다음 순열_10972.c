#include <stdio.h>
#include <stdlib.h>

int main() {

   int N;

   scanf("%d", &N);
 
   int arr[N];
   int temp = 0;

   for (int i = 0; i < N; i++) {
      scanf("%d", &arr[i]);
   }

   for (int i = N-1; i > 0; i--) {
      if (arr[i - 1] > arr[i]) {
         continue;
      }
      else if (arr[i - 1] < arr[i]) {
         for (int j = N-1; j > 0; j--) {
            if (arr[i - 1] < arr[j]) {
               temp = arr[i - 1];
               arr[i - 1] = arr[j];
               arr[j] = temp;
               break;
            }
         }
         for (; i < N; i++) {
            for (int k = i; k < N-1; k++) {
               if (arr[i] > arr[k+1]) {
                  temp = arr[i];
                  arr[i] = arr[k+1];
                  arr[k+1] = temp;
               }

            }
        }
        for (i = 0; i < N; i++) {
        printf("%d ", arr[i]);
        }
        exit(0);
      }
   }

   if (arr[0] == N && arr[N-1]==1) {
      printf("%d", -1);
   }

   return 0;

}
