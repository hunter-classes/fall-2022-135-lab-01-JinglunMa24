#include <iostream>
using namespace std;

int main() {
  int num1, num2;
  cout << "Enter the first number:\n";
  cin >> num1;

  cout << "Enter the second number:\n";
  cin >> num2;

  if (num1 > num2) {
    cout << "The smaller number of the two is " << num2;
  }

  else if (num1 < num2) {
    cout << "The smaller number of the two is " << num1;
  }

  else {
    cout << "They are equal";
  }
  
}
