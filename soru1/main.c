#include <stdio.h>
//Celil Þeref -1210505053-
// 10.000 sayýlýk bir dizideki en büyük sayýyý buluyoruz.
// Parametreler:
//   arr: Dizi
//   n: Dizinin eleman sayýsý
int findMax(int arr[], int n) {
    // En büyük sayýyý ilk eleman olarak seçiyoruz.
    int max = arr[0];
    // Dizinin diðer elemanlarýný kontrol ediyoruz.
    int i;
	for (i = 1; i < n; i++) {
        // Eðer kontrol edilen eleman, þu ana kadar bulduðumuz en büyük sayýdan büyükse,
        // bu elemaný yeni en büyük sayý olarak belirliyoruz.
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    // Dizideki en büyük sayýyý döndürüyoruz.
    return max;
}

int main() {
    // 10000 elemanlý bir dizi oluþturuyoruz.
    int arr[10000];
    // Diziye rastgele sayýlar atýyoruz.
    int i;
    for (i = 0; i < 10000; i++) {
        arr[i] = rand();
    }
    // Dizideki en büyük sayýyý buluyoruz.
    int max = findMax(arr, 10000);
    // En büyük sayýyý ekrana yazdýrýyoruz.
    printf("En buyuk sayi: %d\n", max);
    return 0;
}


