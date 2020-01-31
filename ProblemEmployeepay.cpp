// calculate the total net pay of an employee

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

  // initializng variables:
  double regularHours;
  double overtime;
  double grossPay;
  double netPay;
  double withholdingAmount;

  // withholding amounts:
  double socialSecurityTax;
  double fedIncomeTax;
  double stateIncomeTax;
  double medInsurance;

  // gets necessary inputs from user:
  cout << "Number of regular hours worked in a week: ";
  cin >> regularHours;
  cout << "Number of overtime hours worked: ";
  cin >> overtime;

  cout << endl; // spaces out the output at the end

  grossPay = (regularHours * 16.00) + (overtime * 1.5); // calculating the pay withouth the withholding amounts

  // calculating the withholding amounts:
  socialSecurityTax = grossPay * 0.06; // 6% of the gross pay for social security tax
  fedIncomeTax = grossPay * 0.14; // 14% of the gross pay for federal income tax
  stateIncomeTax = grossPay * 0.05; // 5% of the gross pay for state income tax
  medInsurance = 10.00; // $10 for medical insurance

  withholdingAmount = socialSecurityTax + fedIncomeTax + stateIncomeTax + medInsurance; // total withholding amount

  netPay = grossPay - withholdingAmount; // final pay is the gross pay minus the withholding amounts

  cout << "Gross pay: $" << fixed << setprecision(2) << grossPay << endl; // set precision lets only 2 decimals places (for money)
  cout << endl;

  // printing all the amounts:
  cout << "Withholding amounts: " << endl;
  cout << "Social Security Tax: $" << socialSecurityTax << endl;
  cout << "Federal Income Tax: $" << fedIncomeTax << endl;
  cout << "State Income Tax: $" << stateIncomeTax << endl;
  cout << "Medical Insurance: $10.00" << endl;
  cout << endl;

  cout << "Net take-home pay: $" << netPay << endl;
  cout << endl;

  return 0;

}
