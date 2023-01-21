#include <stdio.h>

int main() {
    int size = 5;
    int x[5]; //int x0, x1, x2, x3, x4;
    printf("Enter %d integers:\n", size);
    //scanf("%d %d %d %d %d", &x[0], &x[1], &x[2], &x[3], &x[4]);
    for (int i = 0; i < size; i++) {
        scanf("%d", &x[i]);
    }

    x[2] = (x[0] + x[4]) / 2;

    // printf("x0=%d\n", x[0]);
    // printf("x1=%d\n", x[1]);
    // printf("x2=%d\n", x[2]);
    // printf("x3=%d\n", x[3]);
    // printf("x4=%d\n", x[4]);
    for (int i = 0; i < size; i++) {
        printf("x[%d]=%d\n", i, x[i]);
    }

    return 0;
}
