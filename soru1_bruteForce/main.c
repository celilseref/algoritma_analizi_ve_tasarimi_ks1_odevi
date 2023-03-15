#include <stdio.h>
// Celil Þeref -1210505053-
// numbers adýnda 10.000 sayýlýk bir dizi tanýmlýyoruz.

int main() {
    int numbers[10000];
    int i, max;
    
    // Rastgele 10.000 sayý üretmek için döngü oluþturuyoruz.
    for (i = 0; i < 10000; i++) {
        numbers[i] = rand();
    }
    
    // En büyük sayýyý bulmak için BruteForce algoritmasýný kullanýyoruz.
    // For döngüsü ile basit bir þekilde tüm sayýlarý karþýlaþtýrarak en büyük sayýyý bulyoruz.
    max = numbers[0];
    for (i = 1; i < 10000; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }
    
    printf("En buyuk sayi: %d", max);
    
    return 0;
}

