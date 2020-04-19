#include <iostream>
#include <string>
using namespace std;

float getTemperature(int input) {
  return input * 1;
}

string getTemperature(string input) {
  return input;
}

int main() {
  cout << "the temperature should be 6: " << getTemperature(6);
}
