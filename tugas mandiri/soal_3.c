#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int bilPrima(int n) {
    if (n <= 1) return 0;         // Bilangan <= 1 bukan prima
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;  // Jika ada pembagi selain 1 dan dirinya sendiri, bukan prima
    }
    return 1;                      // Jika tidak ada pembagi, maka prima
}

int main() {
    int n;
    scanf("%d", &n);

    // Output "PRIMA" jika bilangan prima, "BUKAN" jika bukan
    if (bilPrima(n)) {
        printf("PRIMA\n");
    } else {
        printf("BUKAN\n");
    }

    return 0;
}
