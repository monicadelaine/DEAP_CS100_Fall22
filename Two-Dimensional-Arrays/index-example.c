#include <stdio.h>

int getElement(int x[][6], int r, int c) {
  printf("in [][6] p=%p\n", &(x[r][c]));
  return x[r][c];
}

int getElement12(int x[][12], int r, int c) {
  printf("in [][12] p=%p\n", &(x[r][c]));
  return x[r][c];
}

int main(void) {
  int array[6][4] = {{1, 2, 3, 4},     {5, 6, 7, 8},     {9, 10, 11, 12},
                     {13, 14, 15, 16}, {17, 18, 19, 20}, {21, 22, 23, 24}};

  // What does this loop do?
  for (int i = 0; i < 6 * 4; i++)
    printf("%d (%p)\n", *((int *)array + i), (int *)array + i);
  printf("\n");

  while (1) {
    printf("Enter two subscripts or CTRL-D to exit : ");
    int a, b;
    scanf("%d%d", &a, &b);
    if (feof(stdin))
      break;
    printf("array[%d][%d] is %d\n", a, b, array[a][b]);

    int pos = 4 * a + b;
    int r = pos / 6;
    int c = pos % 6;
    printf("array[%d][%d] is %d\n", r, c, getElement(array, r, c));

    r = pos / 12;
    c = pos % 12;
    printf("array[%d][%d] is %d\n", r, c, getElement12(array, r, c));
  }
  return 0;
}
