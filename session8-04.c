#include <stdio.h>

int main() {
    
    int arr[3][4] = {
        {1, 5, 9, 3},
        {7, 2, 6, 4},
        {8, 0, 10, 12}
    };

    
    int max = arr[0][0]; 

    int i;
    for (i = 0; i < 3; i++) { 
    int j;
        for (j = 0; j < 4; j++) { 
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }

    
    printf("Phan tu lon nhat trong mang là: %d\n", max);

    return 0;
}
