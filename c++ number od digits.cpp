#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter a num";
    cin>>a;

      int dig=0;
    while(a>0)
    {
      
        dig++;
        a=a/10;
        cout<<a;    }}
// #include <iostream>
// using namespace std;

// int main() {
//     int size;
//     cout << "Enter the size of the array: ";
//     cin >> size;
//     if (size <= 0) {
//         cout << "Invalid array size." << endl;
//         return 1;
//     }
//     int arr[size];
//     cout << "Enter " << size << " elements into the array:" << endl;
//     for (int i = 0; i < size; i++) {
//         cout << "Element " << i + 1 << ": ";
//         cin >> arr[i];
//     }
//     int sum = 0;
//     int *ptr = arr;
//     for (int i = 0; i < size; i++) {
//         sum += *ptr;
//         ptr++;
//     }
//     cout << "Sum of array elements: " << sum << endl;
//     return 0;
// }


