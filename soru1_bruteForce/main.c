#include <stdio.h>
// Celil �eref -1210505053-
// numbers ad�nda 10.000 say�l�k bir dizi tan�ml�yoruz.

int main() {
    int numbers[10000];
    int i, max;
    
    // Rastgele 10.000 say� �retmek i�in d�ng� olu�turuyoruz.
    for (i = 0; i < 10000; i++) {
        numbers[i] = rand();
    }
    
    // En b�y�k say�y� bulmak i�in BruteForce algoritmas�n� kullan�yoruz.
    // For d�ng�s� ile basit bir �ekilde t�m say�lar� kar��la�t�rarak en b�y�k say�y� bulyoruz.
    max = numbers[0];
    for (i = 1; i < 10000; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }
    
    printf("En buyuk sayi: %d", max);
    
    return 0;
}

