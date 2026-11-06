#include <stdio.h>

void rotate_right(int *arr, int n) {
    if (n < 2) {
        return;
    }

    int t = arr[n - 1];
    for (int i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1]; 
    }
    arr[0] = t;
}
int main() {
    int a[5] = {1, 2, 3, 4, 5};
    int n = 5;
    rotate_right(a, n);
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}
