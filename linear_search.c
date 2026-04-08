#include <stdio.h>

int main() {
    int arr[100], n, i, key, found = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the key to search: ");
    scanf("%d", &key);
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Element found at index %d\n", i + 1);
            found = 1;
            break;
        }
    }
    if (found == 0) {
        printf("Element not found\n");
    }
    return 0;
}