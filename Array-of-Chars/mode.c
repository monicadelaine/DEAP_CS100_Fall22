#include <stdio.h>

int main() {
    int size = 11;
    int counts[11] = { 0 }; // accessible: 0-10, all init to 0

    int grade;

    // read & store
    printf("Enter grades 0-10, EOF to stop:\n");
    //printf("Enter day string as Sat, Sun, Mon, Tue, Wed, Thu, Fri, one on each line\n");
    while (1) {
        scanf("%d", &grade); // init & update
        // if (feof(stdin)) break; // eof test
        if (grade < 0 || grade > 10) break; // sentinel test
        counts[grade]++; // process
    }

    // store check
    for (int grade = 0; grade < size; grade++) {
        printf("counts[%d]=%d\n", grade, counts[grade]);
    }

    // find the count of the most ocurring grade(s)
    int largestCount = counts[0];
    for (int grade = 0; grade < size; grade++) {
        if (counts[grade] > largestCount) {
            largestCount = counts[grade];
        }
    }

    // print the grade(s) that occurred the most
    printf("The most commonly occurring grades are:\n");
    for (int grade = 0; grade < size; grade++) { // foreach grade/count
        if (counts[grade] == largestCount) {
            printf("%d ", grade);
        }
    }
    printf("\nAnd they occurred %d times\n", largestCount);

    return 0;
}
