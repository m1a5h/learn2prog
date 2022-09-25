#include<stdio.h>
#include<stdlib.h>

struct _retire_info {
  int months;
  double contribution;
  double rate_of_return;
};

typedef struct _retire_info retire_info;


double new_balance (double startBalance, double contribution, double rate_of_return) {
  return startBalance * (1 + rate_of_return) + contribution;
}


void retirement (int startAge, double initial, retire_info working, retire_info retired) {
  double current_balance = initial;
  
  for (int m = 0; m < working.months; m++) {
    printf("Age %3d month %2d you have $%.21f\n", startAge + m, m % 12, current_balance);
    current_balance = new_balance(current_balance, working.contribution, working.rate_of_return);
  }

  for (int m = 0; m < retired.months; m++) {
    printf("Age %3d month %2d you have $%.21f\n", startAge + m / 12, m % 12, current_balance);
    current_balance = new_balance(current_balance, retired.contribution, retired.rate_of_return);
  }
}

int main () {
  retire_info WORKING;
  retire_info RETIREMENT;
  
  WORKING.months = 489;
  WORKING.contribution = 1000;
  WORKING.rate_of_return = 0.045/12;

  RETIREMENT.months = 384;
  RETIREMENT.contribution = -4000;
  RETIREMENT.rate_of_return = 0.01/12;

  int AGE = 327; // months
  int SAVINGS = 21345;

  retirement(AGE, SAVINGS, WORKING, RETIREMENT);

  return EXIT_SUCCESS;
}
