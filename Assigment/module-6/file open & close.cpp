#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("hello.txt"); 
    string str;
    cout << "Enter the string: ";
    cin >> str;
    file << str; 
    file.close(); 
    ifstream file("hello.txt"); 
    string read;
    file >> read;
    cout << read; 
    file.close(); 

    return 0;
}
