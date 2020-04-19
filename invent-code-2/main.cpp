#include <iostream>
#include <string>
using namespace std;

int GetInputNumber() {
  int number_1 = 0;
  cout << "Enter your number" << endl;
  cin >> number_1;
  return number_1;
}

char GetInputOperator() {  
 char operators;
  cout << "Enter your operator" << endl;
  cin >> operators;
  return operators;
}
  
int GetCurrentTotal(int first_number_input, char operators, int second_number_input) {
  int current_total = 0;

  if (operators == '+') {
    current_total = first_number_input + second_number_input;
  }
  if (operators == '%') {
    current_total = first_number_input % second_number_input;
  }
  if (operators == '*') {
    current_total = first_number_input * second_number_input;
  }
  if (operators == '/') {
    current_total = first_number_input / second_number_input;
  }
  if (operators == '-') {
    current_total = first_number_input - second_number_input;
  }
  return current_total;
}

int main() {
  int first_number = GetInputNumber();
  char operators = GetInputOperator();
  int second_number = GetInputNumber();
  int current_total = GetCurrentTotal(first_number, operators, second_number);
  cout << "Your current total is " << current_total << endl;

  operators = GetInputOperator();
  second_number = GetInputNumber();
  int running_total = GetCurrentTotal(current_total, operators, second_number);
  cout << "Your current total is " << running_total << endl;

  operators = GetInputOperator();
  second_number = GetInputNumber();
  running_total = GetCurrentTotal(running_total, operators, second_number);
  cout << "Your current total is " << running_total << endl;

  operators = GetInputOperator();
  second_number = GetInputNumber();
  running_total = GetCurrentTotal(running_total, operators, second_number);
  cout << "Your current total is " << running_total << endl;

  operators = GetInputOperator();
  second_number = GetInputNumber();
  running_total = GetCurrentTotal(running_total, operators, second_number); 
  cout << "Your current total is " << running_total << endl;

  operators = GetInputOperator();
  second_number = GetInputNumber();
  running_total = GetCurrentTotal(running_total, operators, second_number); 
  cout << "Your current total is " << running_total << endl;
  
  operators = GetInputOperator();
  second_number = GetInputNumber();
  running_total = GetCurrentTotal(running_total, operators, second_number); 
  cout << "Your final total is " << running_total << endl;
}