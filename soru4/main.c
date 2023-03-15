#include <stdio.h>
#include <stdlib.h> 

// Celil �eref -1210505053-
// H�zl� s�ralama algoritmas�
void quick_sort(int arr[], int low, int high) {
    int i = low, j = high, pivot = arr[(low + high) / 2]; // Dizinin ortas�ndaki eleman� pivot olarak belirle
    
    // Diziyi pivot eleman�na g�re b�l
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
    
    // Sol taraftaki alt-diziyi s�rala
    if (low < j)
        quick_sort(arr, low, j);
    
    // Sa� taraftaki alt-diziyi s�rala
    if (i < high)
        quick_sort(arr, i, high);
}

int main() {
    int arr[10000];
    int i;
    
    // Rastgele 10000 say�l�k dizi olu�turma
    for (i = 0; i < 10000; i++) {
        arr[i] = rand(); 
    }
    
    // S�ralanmam�� dizi
    printf("S�ralanmam�� dizi: ");
    for (i = 0; i < 10000; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    // Dizi s�ralama
    quick_sort(arr, 0, 9999);
    
    // S�ralanm�� dizi
    printf("S�ralanm�� dizi: ");
    for (i = 0; i < 10000; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}

