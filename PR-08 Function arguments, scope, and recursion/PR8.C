#include <stdio.h>
void printFactorial(int n) {
    if (n == 0) {
        printf("Factorial: 1\n");
    } else {
        int fact = 1;
        for (int i = 1; i <= n; i++) {
            fact *= i;
        }
        printf("Factorial: %d\n", fact);
    }
}

int main() {
    int num = 5;
    printFactorial(num);
    return 0;
}
