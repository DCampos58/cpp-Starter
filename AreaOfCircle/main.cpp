#include <iostream>
#include <cmath>

using namespace std;

int main() {
    const double pi = 3.14;

    cout << "Enter radius: ";
    double radius;
    cin >> radius;

    double area = pi * pow(radius, 2);

    cout << "Area of the circle: " << area;

    return 0;
}
