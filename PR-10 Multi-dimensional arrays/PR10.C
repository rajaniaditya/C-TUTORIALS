#include <stdio.h>
int main() {
    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
    
    // Accessing multi-dimensional array elements
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Element at [%d][%d]: %d\n", i, j, matrix[i][j]);
        }
    }
    
    return 0;
}
