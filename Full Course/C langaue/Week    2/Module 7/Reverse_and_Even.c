#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int array[n];
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &array[i]);
    }

    for (int i = n -1; i >= 0; i=i-2) 
    {
            printf("%d ", array[i]);
    }
    return 0;
}
