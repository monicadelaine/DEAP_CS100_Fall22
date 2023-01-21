#include <stdio.h>
#include <stdlib.h>

// TODO 1: add fields to the struct (keep names, type and sizes)
typedef struct employee_struct {
  char fname[51];
  char lname[51];
  char bankacct[21];
  char maritalStatus;
  double hourlyRate;
  double hoursWorked;
} Employee;

double calculateWitholding(char maritalStatus, double grosspay) {

  double federalWithheld;
  // TODO 1: print marital status and gross pay
  printf("DEBUG: status: %c gross: %.2lf\n", maritalStatus, grosspay);
  if (maritalStatus == 'm' && grosspay > 400 && grosspay <= 800) {

    // TODO 2: print "withholding of .11"
    printf("DEBUG: applying rate of 11%%\n");
    federalWithheld = grosspay * .11;
  } else if (maritalStatus == 'm' && grosspay > 800) {

    // TODO 3: print "withholding of .15"
    printf("DEBUG: applying rate of 15%%\n");
    federalWithheld = grosspay * .15;
  }

  if (maritalStatus == 's' && grosspay > 300 && grosspay <= 600) {

    // TODO 4: print "withholding of .12"
    printf("DEBUG: applying rate of 12%%\n");
    federalWithheld = grosspay * .12;
  } else if (maritalStatus == 's' && grosspay > 600) {
    // TODO 5: print "withholding of .16"
    printf("DEBUG: applying rate of 16%%\n");
    federalWithheld = grosspay * .16;
  }

  return federalWithheld;
}

double calculateGrossPay(double hoursWorked, double hourlyrate) {

  double grosspay;

  if (hoursWorked > 40) {
    grosspay = (hoursWorked - 40) * 1.5 * hourlyrate + hourlyrate * 40;
  } else {
    grosspay = hoursWorked * hourlyrate;
  }

  return grosspay;
}

int main(int argc, char *argv[]) {

  const double MINIMUMWAGE = 7.25;
  double grosspay;
  double federalWithheld;
  double socialSecurityWithheld;
  double ssRate;
  Employee **employees;
  int employeeCount = 0;
  double netpay = 0;

  // TODO 2: read data from file, not from stdin
  // Filename is passed in as parameter 1

  FILE *input = fopen(argv[1], "r");
  ssRate = atof(argv[2]);
  employeeCount = atoi(argv[3]);

  Employee **employeeList = (Employee **)malloc(sizeof(Employee *));

  for (int i = 0; i < employeeCount; i++) {

    employeeList[i] = (Employee *)malloc(sizeof(Employee));
    fscanf(input, "%s %s %s %lf %lf %c\n", employeeList[i]->fname,
           employeeList[i]->lname, employeeList[i]->bankacct,
           &(employeeList[i]->hoursWorked), &(employeeList[i]->hourlyRate),
           &(employeeList[i]->maritalStatus));
    printf("\nDEBUG: name:%s %s acct:%s status:%c rate:%lf hours:%lf\n\n",
           employeeList[i]->fname, employeeList[i]->lname,
           employeeList[i]->bankacct, employeeList[i]->maritalStatus, employeeList[i]->hoursWorked,
           employeeList[i]->hourlyRate);

    // TODO 3: malloc employee struct and save fields to struct

    // TODO 4: update calculateGrossPay to use fields from struct
    grosspay = calculateGrossPay(employeeList[i]->hoursWorked,
                                 employeeList[i]->hourlyRate);

    // TODO 5: Grab the socialsecurity tax rate from the 2nd command line
    // parameter
    socialSecurityWithheld = grosspay * ssRate;

    // TODO 6: update calculateWitholding to use fields from struct
    federalWithheld =
        calculateWitholding(employeeList[i]->maritalStatus, grosspay);

    netpay = grosspay - socialSecurityWithheld - federalWithheld;

    // print paycheck
    printf("Hours worked\tHourly rate\tGross pay\n");
    printf("%.2lf\t\t%.2lf\t\t%.2lf\n\n", employeeList[i]->hoursWorked,
           employeeList[i]->hourlyRate, grosspay);
    printf("Deduction\t\t\tDeduction Amount\n");
    printf("Social Security\t\t\t%.2lf\n", socialSecurityWithheld);
    printf("Federal\t\t\t\t%.2lf\n\n", federalWithheld);
    printf("Gross pay\tTotal Deducted\tNet pay\n");
    printf("%.2lf\t\t%.2lf\t\t%.2lf\n", grosspay,
           socialSecurityWithheld + federalWithheld, netpay);
  }

  // TODO 7: free struct

  for (int i = 0; i < employeeCount; i++)
    free(employeeList[i]);
  free(employeeList);

  // TODO 8: Close file
  fclose(input);
  return (0);
}