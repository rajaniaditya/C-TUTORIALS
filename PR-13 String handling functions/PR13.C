#include <stdio.h>
#include <string.h>
int main() {
    char str1[20] = "Hello";
    char str2[20] = "World";

    strcat(str1, str2); // Concatenation
    printf("Concatenated String: %s\n", str1);

    printf("Length of str1: %lu\n", strlen(str1)); // String length
    strcpy(str2, str1); // Copy string
    printf("Copied String: %s\n", str2);

    return 0;
}
