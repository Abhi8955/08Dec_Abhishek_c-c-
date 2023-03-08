#include <iostream>
using namespace std;

class Matrix 
{
public:
    int size;
    int *arr;
    Matrix(int s) 
    {
        size = s;
        arr = new int[size];
    }
  
    Matrix(const Matrix &obj) 
    {
        size = obj.size;
        arr = new int[size];
        for (int i = 0; i < size; i++) 
        {
            arr[i] = obj.arr[i];
        }
    }
    Matrix operator+(const Matrix &obj) 
    {
        Matrix res(size);
        for (int i = 0; i < size; i++) 
        {
            res.arr[i] = arr[i] + obj.arr[i];
        }
        return res;
    }

    
    void display() 
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    
 };

int main() 
   {
    Matrix m1(5), m2(5);

    cout << "Enter elements of first matrix: ";
    for (int i = 0; i < 5; i++) 
    {
        cin >> m1.arr[i];
    }

    cout << "Enter elements of second matrix: ";
    for (int i = 0; i < 5; i++) 
    {
        cin >> m2.arr[i];
    }

    Matrix res = m1 + m2;

    cout << "Resultant matrix: ";
    res.display();

    return 0;
    }
