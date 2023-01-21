#include <math.h>

int main(void) {

  double changeAmount;
  int changeLeft;
  int singles, quarters, dimes, nickels, pennies;

  printf("Enter amount of change (only use 2 decimal places): ");
  scanf("%lf", &changeAmount);

  // need whole portion
  singles = (int)changeAmount; // need whole amount; truncates but not fast
  changeLeft = (int)(changeAmount - singles); // need just decimal portion
  quarters = changeLeft / 25;
  changeLeft = changeLeft % 25;
  dimes = changeLeft / 10;
  changeLeft = changeLeft % 10;
  nickels = changeLeft / 5;
  changeLeft = changeLeft % 5;
  pennies = changeLeft;

  printf("Change is ");
  printf("%d singles ", singles);
  printf("%d quarters ", quarters);
  printf("%d dimes ", dimes);
  printf("%d nickels ", nickels);
  printf("and %d pennies.\n", pennies);

  return 0;
}