#include <stdio.h>

int main() {
    int a[10] = {2, 5, 2, 7, 5, 9, 1, 7, 3, 1};
    int k = 0; 
    for (int i = 0; i < 10; i++) {
        int f = 0;
        for (int j = 0; j < k; j++) {
            if (a[i] == a[j]) {
                f = 1;
                break;
            }
        }
        if (f == 0) {
            a[k] = a[i];
            k++;
        }
    }

    printf("После: ");
    for (int i = 0; i < k; i++) {
        printf("%d ", a[i]);
    }
    printf("\nНовая длина: %d\n", k);
    return 0;
}
