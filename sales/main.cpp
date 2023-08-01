#include <iostream>

using namespace std;

int main() {

    double sales = 8750;
    const double stateTaxRate = 0.23;

    cout << "Sales: " <<sales<< endl;

    double stateTax = sales * stateTaxRate;

    cout << "State tax: " << stateTax << endl;

    return 0;
}
