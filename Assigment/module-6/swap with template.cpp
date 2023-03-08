#include <iostream>
using namespace std;

template<typename T>
void swapValues(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int a = 5, b = 10;
    double c = 3.14, d = 6.28;

    swapValues(a, b);
    swapValues(c, d);

    cout << "After swapping: " << endl;
    cout << "a = " << a << ", b = " << b << endl;
    cout << "c = " << c << ", d = " << d << endl;

    return 0;
}
