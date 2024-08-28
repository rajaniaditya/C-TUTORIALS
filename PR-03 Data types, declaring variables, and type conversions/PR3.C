#include <stdio.h>
int main() {
    int a = 10;
    float b = 5.5;
    char c = 'A';

    printf("Integer: %d\n", a);
    printf("Float: %.2f\n", b);
    printf("Character: %c\n", c);

    // Type conversion
    int x = (int)b;
    printf("Converted Float to Integer: %d\n", x);
    
    return 0;
}
