#include <iostream>
using namespace std;

class Interest {
private:
    int principal;
    int year;
    float rate;
public:
    Interest(int p, int y, int r) {
        principal = p;
        year = y;
        rate = float(r) / 100;
    }

    Interest(int p, int y, float r = 2.5) {
        principal = p;
        year = y;
        rate = r / 100;
    }

    float calculateInterest() {
        return principal * rate * year;
    }
};

int main() 
   {
     Interest int1(1000, 2, 5);

     Interest int2(2000, 3);

     cout << "Simple Interest for int1 = " << int1.calculateInterest() << endl;
     cout << "Simple Interest for int2 = " << int2.calculateInterest() << endl;

     return 0;
    }
