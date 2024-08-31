#include <stdio.h>
int main() {
    int i;

    // For loop
    for(i = 0; i < 5; i++) {
        printf("For loop iteration: %d\n", i);
    }

    // While loop
    i = 0;
    while (i < 5) {
        printf("While loop iteration: %d\n", i);
        i++;
    }

    // Do-while loop
    i = 0;
    do {
        printf("Do-while loop iteration: %d\n", i);
        i++;
    } while (i < 5);
    
    return 0;
}
