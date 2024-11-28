#include <stdio.h>

int main() {
    int n;

    
    printf("Nhap mot so nguyên (kích thuoc ma tran vuông): ");
    scanf("%d", &n);

    
    int matrix[n][n];

    
    printf("Nhap các phan tu cho ma tran %dx%d:\n", n, n);
    int i;
    for (i = 0; i < n; i++) {
    	int j;
        for (j = 0; j < n; j++) {
            printf("Phan tu [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    
    printf("Ma tran vuông dã nhap:\n");
    for (i = 0; i < n; i++) {
    	int j;
        for (j = 0; j < n; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
