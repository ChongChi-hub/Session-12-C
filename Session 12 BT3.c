#include <stdio.h>

int factorial(int n){
    int result = 1;
        for (int i = 1; i <= n; i++) {
        result =result * i;
    }
    return result;
}

int main() {
    int n;

    printf("Nhap mot so nguyen: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("So am khong co giai thua.\n");
    } else{
        printf("Giai thua cua %d la: %d\n", n, factorial(n));
    }
    return 0;
}

