#include <stdio.h>

int main() {
    int a[15] = {3, 5, 7, 2, 4, 6, 8, 1, 3, 5, 0, 2, 4, 6, 1};

    int len = 1;
    int max = 1;
    int pos = 0;
    for (int i = 1; i < 15; i++) {
        if (a[i] > a[i - 1]) {
            len++;
            if (len > max) {
                max = len;
                pos = i - max + 1;
            }
        } else {
            len = 1;
        }
    }
    printf("Длина: %d\nПоследовательность: ", max);
    for (int i = pos; i < pos + max; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}