#include <stdio.h>
//so hoan hao: 6, 28, 496, 8128.
int isPerfect(int n) {
    if (n <= 0) {
    return 0;
    }
    int sum = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0){
         sum = sum + i;   
        }
    }
    return sum == n;
}
int main() {
    int n1, n2;
    printf("Nhap so thu nhat: ");
    scanf("%d", &n1);
    printf("Nhap so thu hai: ");
    scanf("%d", &n2);
    if (isPerfect(n1)) {
        printf("%d la so hoan hao.\n", n1);
    } else {
        printf("%d khong phai la so hoan hao.\n", n1);
    }
    if (isPerfect(n2)) {
        printf("%d la so hoan hao.\n", n2);
    } else {
        printf("%d khong phai la so hoan hao.\n", n2);
    }
    return 0;
}
