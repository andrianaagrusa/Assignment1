
// convert ounces to metric tons

#include <iostream>
using namespace std;

int main() {

  // initializing variables:
  int weightOunces;
  double weightMetricTons;
  double numBoxes;

  cout << "Enter the weight in ounces: ";
  cin >> weightOunces; // gets input from user
  weightMetricTons = weightOunces / 35273.92; // weight of ceral in ounces divided by the weight of a metric ton in ounces
  cout << weightMetricTons << " Metric tons" << endl;

  // find the number of boxes required to hold the cereal:
  numBoxes =  35273.92 / weightMetricTons;
  cout << "You will need " << numBoxes << " boxes" << endl;

  return 0;
}
