#include <stdio.h>

int main() {
    int n; 
    printf("Nhap kích thuoc ma tran vuông: ");
    scanf("%d", &n);

    
    int matrix[n][n];
    printf("Nhap các phan tu cua ma tran:\n");
    int i;
    for (i = 0; i < n; i++) {
    	int j;
        for (j = 0; j < n; j++) {
            printf("matrix[%d][%d] = ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    
    int sum = 0;
    printf("Các phan tu trên duong chéo chính là: ");
    for (i = 0; i < n; i++) {
        printf("%d ", matrix[i][i]);
        sum += matrix[i][i];
    }

    printf("\nTong các phan tu trên duong chéo chính là: %d\n", sum);

    return 0;
}
