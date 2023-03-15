#include <stdio.h>
#include <stdlib.h>

// Celil Þeref -1210505053-
// Bruteforce veri sýralama algoritmasý
void bruteForceSort(int arr[], int n) {
   int i, j;
   // tüm diziyi dolaþarak sýralama yap
   for (i = 0; i < n-1; i++) {
      // her elemandan sonra kalan elemanlarla karþýlaþtýr
      for (j = i+1; j < n; j++) {
         // eðer sýradaki eleman þu anki elemandan küçükse yer deðiþtir
         if (arr[j] < arr[i]) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
         }
      }
   }
}

int main() {
   int arr[10000];
   int i;

   // rastgele 10000 sayý üret ve diziye ekle
   for (i = 0; i < 10000; i++) {
      arr[i] = rand() % 1000; // 0-999 arasý sayýlar üret
   }

   printf("Sýralanmamýþ dizi:\n");
   for (i = 0; i < 10000; i++) {
      printf("%d ", arr[i]);
   }

   // dizi elemanlarýný bruteforce yöntemiyle sýrala
   bruteForceSort(arr, 10000);

   printf("\nSýralanmýþ dizi:\n");
   for (i = 0; i < 10000; i++) {
      printf("%d ", arr[i]);
   }

   return 0;
}

