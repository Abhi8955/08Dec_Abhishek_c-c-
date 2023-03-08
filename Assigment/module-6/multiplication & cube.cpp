#include <iostream>
using namespace std;

inline int multiply(int a, int b) 
  {
    return a * b;
  }

inline int cube(int a) 
  {
    return a * a * a;
  }

int main() {
    int x, y;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "Multiplication of " << x << " and " << y << " is " << multiply(x, y) << endl;

    cout << "Enter a number: ";
    cin >> x;

    cout << "Cubic value of " << x << " is " << cube(x) << endl;

    return 0;
}
