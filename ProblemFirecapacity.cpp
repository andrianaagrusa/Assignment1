// determine whether the number of people attending qualifies for the fire capacity requirements

#include <iostream>
using namespace std;

int main() {
  int maxCapacity;
  int numPeople;
  int numAdd; // how many additional people may attend
  int numExclude; //how many people must be excluded

  // gets the maximum room capacity and number of people attending from the user:
  cout << "Enter maximum room capacity: ";
  cin >> maxCapacity;
  cout << "Number of people attending: ";
  cin >> numPeople;

  // checking if the number of people satisfies the max room capacity:
  if (numPeople <= maxCapacity) { // if the number of people is less than or equal to the max room capacity
    cout << "It is legal to hold the meeting." << endl;
    numAdd = maxCapacity - numPeople; // how many extra people will fit in the room
    cout << numAdd << " additional people may legally attend." << endl;
  }

  else { // if the number of people exceeds the max room capacity:
    cout << "The meeting cannot be held due to fire regulations." << endl;
    numExclude = numPeople - maxCapacity; // how many people need to be removed to fit the max room capacity
    cout << numExclude << " people must be excluded in order to meet the fire regulations." << endl;
    }

  return 0;
}
