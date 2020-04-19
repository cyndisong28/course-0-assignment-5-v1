#include <iostream>
#include <string>
using namespace std;

int get_temperature() {
  return 75;
}

int main() {
  int temp = get_temperature();
  cout << temp;
}
