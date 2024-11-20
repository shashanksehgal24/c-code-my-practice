#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Number of processes: ";
    cin >> n;

    int bt[n], WT[n], TAT[n];
    float totalBT = 0, totalTAT = 0;
    cout << "Enter burst time for each process:\n";
    for(int i = 0; i < n; i++) {
        cout << "Process " << i + 1 << ": ";
        cin >> bt[i];
        totalBT += bt[i]; 
    }
    WT[0] = 0;
    for(int i = 1; i < n; i++) {
        WT[i] = WT[i - 1] + bt[i - 1];
    }
    for(int i = 0; i < n; i++) {
        TAT[i] = WT[i] + bt[i];
        totalTAT += TAT[i]; 
    }
    cout << "\nProcess\tBurst Time\tWaiting Time\tTurnaround Time\n";
    for(int i = 0; i < n; i++) {
        cout << i + 1 << "\t" << bt[i] << "\t\t" << WT[i] << "\t\t" << TAT[i] << endl;
    }
    cout << "\nAverage BT" << totalBT / n << endl;
    cout << "Average TAT: " << totalTAT / n << endl;
  return 0;
}
