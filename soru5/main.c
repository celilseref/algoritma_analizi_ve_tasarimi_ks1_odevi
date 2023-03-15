#include <stdio.h>

// Lineer arama fonksiyonu
int linearSearch(int arr[], int n, int x) {
    // Dizi elemanlar�n� tek tek kontrol eder
    int i;
	for (i = 0; i < n; i++) {
        if (arr[i] == x) {
            // E�er aranan eleman bulunursa, indisini d�nd�r�r
            return i;
        }
    }
    // Aranan eleman bulunamad�ysa -1 d�nd�r�r
    return -1;
}

int main() {
    int arr[] = {2, 5, 8, 12, 16};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 12;
    int result = linearSearch(arr, n, x);
    if (result == -1) {
        printf("Aranan eleman bulunamadi.\n");
    } else {
        printf("Aranan eleman: %d\n", result);
    }
    return 0;
}

