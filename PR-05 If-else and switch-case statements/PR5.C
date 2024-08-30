#include <stdio.h>
int main() {
    int num = 2;

    // If-else
    if (num > 0) {
        printf("Positive number\n");
    } else {
        printf("Negative number\n");
    }

    // Switch-case
    switch(num) {
        case 1:
            printf("One\n");
            break;
        case 2:
            printf("Two\n");
            break;
        default:
            printf("Not One or Two\n");
    }
    
    return 0;
}
