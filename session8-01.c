#include <stdio.h>

int main() {
    
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]); 

    printf("C�c phan tu cua mang tu cuoi va dau l�:\n");
    int i;
    for(i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}
