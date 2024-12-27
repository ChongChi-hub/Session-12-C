#include <stdio.h>

int isPrime(int n) {
    if (n <= 1) 
    return 0;
    
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}
int main() {
    int n1, n2;
    printf("Nhap so thu nhat: ");
    scanf("%d", &n1);
    printf("Nhap so thu hai: ");
    scanf("%d", &n2);
    if (isPrime(n1)) {
        printf("%d la so nguyen to.\n", n1);
    } else {
        printf("%d khong phai la so nguyen to.\n", n1);
    }
    if (isPrime(n2)) {
        printf("%d la so nguyen to.\n", n2);
    } else {
        printf("%d khong phai la so nguyen to.\n", n2);
    }

    return 0;
}


