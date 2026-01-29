#include <stdio.h>

int main() {
    int i, j, isPrime;

    printf("1 se 100 ke beech ke Prime numbers ye hain:\n");

    // Bahar wala loop (i) 2 se 100 tak chalega
    for (i = 2; i <= 100; i++) {
        
        isPrime = 1; // Maan lo ki 'i' Prime hai (1 means True)

        // Andar wala loop (j) check karega ki i kisi se kat-ta hai ya nahi
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0; // Agar kat gaya, toh isPrime ko False (0) kar do
                break;       // Ab aage check karne ki zaroorat nahi
            }
        }

        // Agar check karne ke baad bhi isPrime 1 hi raha, toh print kar do
        if (isPrime == 1) {
            printf("%d ", i);
        }
    }

    return 0;
}