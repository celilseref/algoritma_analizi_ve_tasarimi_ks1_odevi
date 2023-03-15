#include <stdio.h>
#include <stdlib.h>

// Celil �eref -1210505053-
// Bruteforce veri s�ralama algoritmas�
void bruteForceSort(int arr[], int n) {
   int i, j;
   // t�m diziyi dola�arak s�ralama yap
   for (i = 0; i < n-1; i++) {
      // her elemandan sonra kalan elemanlarla kar��la�t�r
      for (j = i+1; j < n; j++) {
         // e�er s�radaki eleman �u anki elemandan k���kse yer de�i�tir
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

   // rastgele 10000 say� �ret ve diziye ekle
   for (i = 0; i < 10000; i++) {
      arr[i] = rand() % 1000; // 0-999 aras� say�lar �ret
   }

   printf("S�ralanmam�� dizi:\n");
   for (i = 0; i < 10000; i++) {
      printf("%d ", arr[i]);
   }

   // dizi elemanlar�n� bruteforce y�ntemiyle s�rala
   bruteForceSort(arr, 10000);

   printf("\nS�ralanm�� dizi:\n");
   for (i = 0; i < 10000; i++) {
      printf("%d ", arr[i]);
   }

   return 0;
}

