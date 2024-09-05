#include <stdio.h>
int main() {
    int num = 10;
    int *p = &num;

    printf("Address of num: %p\n", p);
    printf("Value of num through pointer: %d\n", *p);
    
    return 0;
}
