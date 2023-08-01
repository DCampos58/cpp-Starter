#include <iostream>

using namespace std;

int main() {

    cout << "enter sale value: ";

    double sales;
    cin >> sales;

    const double stateTaxRate = 0.23;

    cout << "Sales: " <<sales<< endl;

    double stateTax = sales * stateTaxRate;

    cout << "State tax: " << stateTax << endl;

    return 0;
}
