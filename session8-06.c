#include <stdio.h>

int main() {
    int n; 
    printf("Nhap k�ch thuoc ma tran vu�ng: ");
    scanf("%d", &n);

    
    int matrix[n][n];
    printf("Nhap c�c phan tu cua ma tran:\n");
    int i;
    for (i = 0; i < n; i++) {
    	int j;
        for (j = 0; j < n; j++) {
            printf("matrix[%d][%d] = ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    
    int sum = 0;
    printf("C�c phan tu tr�n duong ch�o ch�nh l�: ");
    for (i = 0; i < n; i++) {
        printf("%d ", matrix[i][i]);
        sum += matrix[i][i];
    }

    printf("\nTong c�c phan tu tr�n duong ch�o ch�nh l�: %d\n", sum);

    return 0;
}
