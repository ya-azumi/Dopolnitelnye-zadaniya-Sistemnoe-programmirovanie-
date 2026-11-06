#include <stdio.h>

int main() {
    int a[5] = {1, 4, 7, 9, 12};
    int b[5] = {2, 3, 6, 10, 15};
    int c[10];

    int i = 0;
    int j = 0;
    int k = 0;
    while (i < 5 && j < 5) {
        if (a[i] < b[j]) {
            c[k] = a[i];
            i++;
        } else {
            c[k] = b[j];
            j++;
        }
        k++;
    }
    while (i < 5) {
        c[k] = a[i];
        i++;
        k++;
    }
    while (j < 5) {
        c[k] = b[j];
        j++;
        k++;
    }

    printf("Результат: ");
    for (int m = 0; m < 10; m++) {
        printf("%d ", c[m]);
    }
    return 0;
}
