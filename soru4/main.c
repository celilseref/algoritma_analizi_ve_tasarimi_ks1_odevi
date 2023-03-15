#include <stdio.h>
#include <stdlib.h> 

// Celil Þeref -1210505053-
// Hýzlý sýralama algoritmasý
void quick_sort(int arr[], int low, int high) {
    int i = low, j = high, pivot = arr[(low + high) / 2]; // Dizinin ortasýndaki elemaný pivot olarak belirle
    
    // Diziyi pivot elemanýna göre böl
    while (i <= j) {
        while (arr[i] < pivot)
            i++;
        while (arr[j] > pivot)
            j--;
        if (i <= j) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }
    
    // Sol taraftaki alt-diziyi sýrala
    if (low < j)
        quick_sort(arr, low, j);
    
    // Sað taraftaki alt-diziyi sýrala
    if (i < high)
        quick_sort(arr, i, high);
}

int main() {
    int arr[10000];
    int i;
    
    // Rastgele 10000 sayýlýk dizi oluþturma
    for (i = 0; i < 10000; i++) {
        arr[i] = rand(); 
    }
    
    // Sýralanmamýþ dizi
    printf("Sýralanmamýþ dizi: ");
    for (i = 0; i < 10000; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    // Dizi sýralama
    quick_sort(arr, 0, 9999);
    
    // Sýralanmýþ dizi
    printf("Sýralanmýþ dizi: ");
    for (i = 0; i < 10000; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}

