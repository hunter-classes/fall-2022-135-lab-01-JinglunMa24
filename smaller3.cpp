#include <iostream>
using namespace std;

int main() {
  int num1, num2, num3;

  cout << "Enter the first number:\n";
  cin >> num1;
  cout << "Enter the second number:\n";
  cin >> num2;
  cout << "Enter the third number:\n";
  cin >> num3;

  if (num1 < num2) {
    if (num1 < num3) {
      cout << "The smaller of the three is " << num1;
    }
    else {
      cout << "The smaller of the three is " << num3;
    }
  }

  else {
    if (num2 < num3) {
      cout << "The smaller of the three is " << num2;
    }
    else {
      cout << "The smaller of the three is " << num3;
    }
  }
  
  return 0;  
}
