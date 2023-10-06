#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  float num = 3.14159;
  int width = 15;

  cout << fixed << setprecision(2) << num << endl; // displays 3.14
  cout << setw(width) << left << "Hello" << setw(width) << right << "World!" << endl;
  // displays "Hello     World!"
  
  return 0;
}
