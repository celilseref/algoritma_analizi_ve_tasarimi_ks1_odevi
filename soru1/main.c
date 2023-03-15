#include <stdio.h>
//Celil �eref -1210505053-
// 10.000 say�l�k bir dizideki en b�y�k say�y� buluyoruz.
// Parametreler:
//   arr: Dizi
//   n: Dizinin eleman say�s�
int findMax(int arr[], int n) {
    // En b�y�k say�y� ilk eleman olarak se�iyoruz.
    int max = arr[0];
    // Dizinin di�er elemanlar�n� kontrol ediyoruz.
    int i;
	for (i = 1; i < n; i++) {
        // E�er kontrol edilen eleman, �u ana kadar buldu�umuz en b�y�k say�dan b�y�kse,
        // bu eleman� yeni en b�y�k say� olarak belirliyoruz.
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    // Dizideki en b�y�k say�y� d�nd�r�yoruz.
    return max;
}

int main() {
    // 10000 elemanl� bir dizi olu�turuyoruz.
    int arr[10000];
    // Diziye rastgele say�lar at�yoruz.
    int i;
    for (i = 0; i < 10000; i++) {
        arr[i] = rand();
    }
    // Dizideki en b�y�k say�y� buluyoruz.
    int max = findMax(arr, 10000);
    // En b�y�k say�y� ekrana yazd�r�yoruz.
    printf("En buyuk sayi: %d\n", max);
    return 0;
}


