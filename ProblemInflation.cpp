// calculate the estimated price of an item after x years and y% inflation

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

  // initializing variables:
  double costItem;
  int numYears;
  double rateInflation;
  int i;

  //user inputs for original cost, number of years, and rate of inflation
  cout << "Enter the cost of the item: $";
  cin >> costItem;

  cout << "Enter number of years from now: ";
  cin >> numYears;

  cout << "Enter the rate of inflation as percentage: ";
  cin >> rateInflation;

  for (i = 0; i < numYears; ++i) { // raises the price each year by the inflation rate
    costItem = (costItem * (rateInflation/100)) + costItem; // new cost of the item after inflation
  }

  cout << "Estimated cost of item: $" << fixed << setprecision(2) << costItem << endl; // set the decimal place to 2 (for money)

  return 0;
}
