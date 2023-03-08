#include <iostream>
using namespace std;

class Number 
{
private:
    int num;

public:
    Number(int n = 0) : num(n) 
    {}

    void display() 
    {
        cout << "Number: " << num << endl;
    }

    friend void swap(Number &x, Number &y) 
    {
        int temp = x.num;
        x.num = y.num;
        y.num = temp;
    }
};

int main() 
{
    Number a(5), b(10);

    cout << "Before swapping:" << endl;
    a.display();
    b.display();

    swap(a, b); 

    cout << "After swapping:" << endl;
    a.display();
    b.display();

    return 0;
}
