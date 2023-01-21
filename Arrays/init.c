#include <stdio.h>

int main() {
    // char str[] = "dfdfdf";
    // char str2[50];
    // char str3[50] = "dfd";
    // char str[50] = {'H', 'e', '\0'};

    int a1[5]; // { ?, ?, ?, ?, ? }
    int a2[] = { 3, 1, 4, 1, 5 }; // auto size of 5
    int a3[5] = { 3, 1 }; // { 3, 1, 0, 0, 0 }
    int a4[5] = { 0 }; // { 0, 0, 0, 0, 0 }

    a4[10000] = 10;
    printf("%d\n", a2[6]);

    return 0;
}
