#include <stdio.h>

int main() {
    int size = 128;
    int counts[128] = { 0 };

    printf("Enter characters, EOF to stop:\n");
    char ch;
    while (1) {
        scanf("%c", &ch); // init & update
        if (feof(stdin)) break; // eof test
        counts[ch]++; // process
    }

    for (int ch = ' '; ch <= '~'; ch++) {
        printf("counts['%c']=%d\n", (char)ch, counts[ch]);
    }

    int largestCount = counts[0];
    for (char ch = ' '; ch <= '~'; ch++) {
        if (counts[ch] > largestCount) {
            largestCount = counts[ch];
        }
    }

    printf("The most commonly occurring grades are:\n");
    for (char ch = ' '; ch <= '~'; ch++) {
        if (counts[ch] == largestCount) {
            printf("'%c' ", ch);
        }
    }
    printf("\nAnd they occurred %d times\n", largestCount);

    return 0;
}
