#include <iostream>
using namespace std;
void swap(int &a, int &b) {
    a=a+b;
    b=a-b;
    a=a-b;
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    
    swap(num1, num2);

    cout << "num1 = "<< num1 ;
    cout<< "num2 = " << num2;

    return 0;
}
