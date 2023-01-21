#include <stdio.h>

int main(void) {

  char maritalStatus;
  double hourlyRate;
  double hoursWorked;
  const double MINIMUMWAGE = 7.25;
  double grosspay;
  double federalWithheld;
  double socialSecurityWithheld;
  double netpay;

  printf("\nEnter s if you are single and m if you are married\n");
  scanf("%c", &maritalStatus);
  if (maritalStatus != 's' && maritalStatus != 'm') {
    printf("ERROR: Marital status is not is not s or m\nExiting\n");
    return 0;
  }

  printf("\nEnter the hourly rate\n");
  scanf("%lf", &hourlyRate);
  if (hourlyRate < MINIMUMWAGE) {
    printf("ERROR: Hourly rate below minimum wages\nExiting\n");
    return 0;
  }

  printf("\nEnter the hours worked\n");
  scanf("%lf", &hoursWorked);
  if (hoursWorked <= 0) {
    printf("ERROR: Hours worked not valid\nExiting\n");
    return 0;
  }

  printf("\nDEBUG: status:%c rate:%lf hours:%lf\n\n", maritalStatus, hourlyRate,
         hoursWorked);

  if (hoursWorked > 40) {
    grosspay = (hoursWorked - 40) * 1.5 * hourlyRate + hourlyRate * 40;
  } else {
    grosspay = hoursWorked * hourlyRate;
  }

  socialSecurityWithheld = grosspay * .062;

  // TODO 1: print marital status and gross pay
  if (maritalStatus == 'm' && grosspay > 400 && grosspay <= 800) {

    // TODO 2: print "withholding of .11"
    federalWithheld = grosspay * .11;
  } else if (maritalStatus == 's' && grosspay > 800) {

    // TODO 3: print "withholding of .15"
    federalWithheld = grosspay * .15;
  }

  if (maritalStatus == 's' && grosspay > 300 && grosspay <= 600) {

    // TODO 4: print "withholding of .12"
    federalWithheld = grosspay * .12;
  } else if (maritalStatus == 's' && grosspay > 800) {

    // TODO 5: print "withholding of .16"
    federalWithheld = grosspay * .16;
  }

  // TODO 6: print federal witholding

  // TODO 7: print net pay
  netpay = grosspay - socialSecurityWithheld - federalWithheld;

  // print paycheck stub
  printf("Hours worked\tHourly rate\tGross pay\n");
  printf("%.2lf\t\t\t%.2lf\t\t\t%.2lf\n\n", hoursWorked, hourlyRate, grosspay);
  printf("Deduction\t\t\tDeduction Amount\n");
  printf("Social Security\t\t%.2lf\n", socialSecurityWithheld);
  printf("Federal\t\t\t\t%.2lf\n\n", federalWithheld);
  printf("Gross pay\tTotal Deducted\tNet pay\n", grosspay, socialSecurityWithheld + federalWithheld, netpay);
  printf("%.2lf\t\t%.2lf\t\t\t%.2lf\n", grosspay, socialSecurityWithheld + federalWithheld, netpay);

  return 0;
}
