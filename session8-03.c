#include <stdio.h>

int main() {
    int n;

    
    printf("Nhap mot so nguy�n (k�ch thuoc ma tran vu�ng): ");
    scanf("%d", &n);

    
    int matrix[n][n];

    
    printf("Nhap c�c phan tu cho ma tran %dx%d:\n", n, n);
    int i;
    for (i = 0; i < n; i++) {
    	int j;
        for (j = 0; j < n; j++) {
            printf("Phan tu [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    
    printf("Ma tran vu�ng d� nhap:\n");
    for (i = 0; i < n; i++) {
    	int j;
        for (j = 0; j < n; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
