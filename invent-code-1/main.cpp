#include <iostream>
#include <string>
using namespace std;

// Uncomment and fill out this function for Part 2.
float CostOfIngredient() {
  string ingredient;
  int total_cost = 0;
  int num_ingredient;
  cout << "what is your ingredient?" << endl;
  cin >> ingredient;
  cout << "How many " << ingredient << "(s)" << "are in the recipe?" << endl;
  cin >> num_ingredient;
  if (num_ingredient > 0) {
    int price_ingredient;
    cout << "What is the price of a(n)" << ingredient << "?" << endl;
    cin >> price_ingredient;
    int price_of_an_ingredient = num_ingredient * price_ingredient;
    total_cost = total_cost + price_of_an_ingredient;
  }
  return total_cost;
}

int main() {
  int total_receipt_cost = 0;
  total_receipt_cost = CostOfIngredient() + CostOfIngredient() + CostOfIngredient() + CostOfIngredient();
  cout << "The total cost of the recipe will be: $" << total_receipt_cost << endl;
}
