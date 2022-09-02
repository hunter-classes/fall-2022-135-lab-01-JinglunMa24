#include <iostream>
using namespace std;

int main() {
  int year, month;

  cout << "Enter year:\n";
  cin >> year;
  cout << "Enter month:\n";
  cin >> month;

  if (month < 7) {
    if (month == 2) {
    
      if (year % 4 && year % 400 > 0) {
        cout << "28 days";
      }
      else if (year % 100 > 0) {
        cout << "29 days";
      }
      else {
        cout << "29 days";
      }
      
    }
      
    else if (month % 2 == 0) {
      cout << "30 days";
    }
    else {
      cout << "31 days";
    }
  }

  else if (month > 8) {
    if (month % 2 > 0) {
      cout << "30 days";
    }
    else {
      cout << "31 days";
    }
  }

  else {
    cout << "31 days";
  }
  
    
  return 0;
}
