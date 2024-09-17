#include <stdio.h>
#include <stdlib.h>

// Fungsi pembanding untuk digunakan oleh qsort
int compare(const void* a, const void* b) {
    return ((int)a - (int)b);
}

int main() {
    int n;
    
    // Membaca jumlah bilangan
    scanf("%d", &n);
    
    int arr[n];
    
    // Membaca nilai-nilai bilangan
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Mengurutkan array menggunakan qsort
    qsort(arr, n, sizeof(int), compare);
    
    // Mencetak nilai yang sudah diurutkan, setiap nilai di baris baru
    for(int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }
    
    return 0;
}