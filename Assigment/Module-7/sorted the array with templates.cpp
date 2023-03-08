#include<iostream>
using namespace std;

template <class T>
void sortArray(T arr[], int size) {
    for (int i = 0; i < size-1; i++) {
        for (int j = 0; j < size-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                T temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int intArr[] = {5, 2, 8, 1, 3};
    double doubleArr[] = {3.14, 2.0, 1.0, 2.71, 1.5};
    int intSize = sizeof(intArr) / sizeof(int);
    int doubleSize = sizeof(doubleArr) / sizeof(double);
    
    sortArray(intArr, intSize);
    sortArray(doubleArr, doubleSize);
    
    cout << "Sorted int array: ";
    for (int i = 0; i < intSize; i++) {
        cout << intArr[i] << " ";
    }
    cout << endl;
    
    cout << "Sorted double array: ";
    for (int i = 0; i < doubleSize; i++) {
        cout << doubleArr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
