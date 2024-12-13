#include <stdio.h>
int primeCheck(int currentNumber) {
    for (int i = 2; i <= currentNumber / 2; i++) {
        if (currentNumber % i == 0) return 0;
    }
    return 1;
}
int main() {
    int n;
    int foundPrimes = 0;
    int currentNumber = 2;
    printf("Nhap vao so nguyen duong: ");
    scanf("%d", &n);
    printf("Cac so nguyen to dau tien la: ");
    while (foundPrimes < n) {
        if (primeCheck(currentNumber)) {
            printf("%d ", currentNumber);
            foundPrimes++;
        }
        currentNumber++;
    }
    return 0;
}
