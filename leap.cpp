#include <iostream>
using namespace std;

int main() {
  int year;

  cout << "Enter year:\n";
  cin >> year;

  if (year % 4 > 0) {
    cout << "Common year";
  }
  else if (year % 100 > 0) {
    cout << "Leap year";
  }
  else if (year % 400 > 0) {
    cout << "Common year";
  }
  else {
    cout << "Leap year";
  }
  
  return 0;
}
