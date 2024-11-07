#include <iostream>
using namespace std;

int main() {
    // Declare variables
    const double price_A = 50.0;
    const double price_B = 30.0;
    const double price_C = 20.0;
    int quantity_A, quantity_B, quantity_C;

    // Input quantity for each product
    cout << "Enter quantity for Product A: ";
    cin >> quantity_A;
    cout << "Enter quantity for Product B: ";
    cin >> quantity_B;
    cout << "Enter quantity for Product C: ";
    cin >> quantity_C;

    // Calculate totals
    double total_A = price_A * quantity_A;
    double total_B = price_B * quantity_B;
    double total_C = price_C * quantity_C;
    double grandTotal = total_A + total_B + total_C;

    // Display results
    cout << "\nCost for selected products:\n";
    cout << "Product A: $" << total_A << endl;
    cout << "Product B: $" << total_B << endl;
    cout << "Product C: $" << total_C << endl;
    cout << "Grand Total: $" << grandTotal << endl;

    return 0;
}