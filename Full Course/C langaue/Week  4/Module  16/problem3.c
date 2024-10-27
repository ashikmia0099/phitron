#include <stdio.h>

int count_before_zero(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == 0) {
            break;
        }
        count++;
    }
    return count;
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int size;
        scanf("%d", &size);
        int arr[size];
        for (int j = 0; j < size; j++) {
            scanf("%d", &arr[j]);
        }
        int count = count_before_zero(arr, size);
        printf("%d\n", count);
    }
    return 0;
}
