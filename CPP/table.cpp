#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int celsius;
    double fahrenheit;

    // Display table headers
    cout << setw(15) << "Celsius" << setw(15) << "Fahrenheit" << endl;

    // Display table entries
    for (celsius = 0; celsius <= 100; celsius++) {
        fahrenheit = 9.0 / 5.0 * celsius + 32.0;
        cout << setw(15) << celsius << setw(15) << fixed << setprecision(1) << fahrenheit << endl;
    }

    return 0;
}
