#include <stdio.h>

int main() {
    
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]); 
    int element, found = 0;

    
    printf("Nhap mot phan tu can t�m: ");
    scanf("%d", &element);

    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] == element) {
            printf("Vi tr� phan tu trong mang l� %d.\n", i);
            found = 1; 
            break;
        }
    }

    
    if (!found) {
        printf("Phan tu kh�ng ton tai trong mang.\n");
    }

    return 0;
}
