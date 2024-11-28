#include <stdio.h>

int main() {
    
    int matrix[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    int rows = 4, cols = 4; 
    int sum = 0;

    int i;
    for (i = 0; i < rows; i++) {
    	int j;
        for (j = 0; j < cols; j++) {
            if (i == 0 || i == rows - 1 || j == 0 || j == cols - 1) { 
                sum += matrix[i][j];
            }
        }
    }

    
    printf("Tong các phan tu trên duong biên cua ma tran là: %d\n", sum);

    return 0;
}
