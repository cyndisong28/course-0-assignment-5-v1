#include <iostream>
#include <string>
using namespace std;

long long getFactorial(int input) {
  if (input == 0 || input == 1){
      return 1;
  }
  return input * getFactorial(input -1 ); 
}

int main() {
    int number = 0;
    cout << "Please input your number." << endl;
    cin >> number;
    if (number < 0 ){
      cout << " Negative number is invalid ";
      return 0;
    }

    long long factorial = getFactorial(number);
  
    cout << "The factorial of " << number << " is " << factorial << endl;
}
