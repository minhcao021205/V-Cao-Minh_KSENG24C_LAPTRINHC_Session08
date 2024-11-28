#include <stdio.h>

int main() {
    
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]); 

    printf("Các phan tu cua mang tu cuoi va dau là:\n");
    int i;
    for(i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}
