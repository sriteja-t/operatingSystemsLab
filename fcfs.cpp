#include<iostream>
using namespace std;

int main()
{
    int n, i, j;
    cout << "Enter total number of processes: ";
    cin >> n;
 	int bt[n], wt[n], tat[n], tot_wt, tot_tat, avg_wt, avg_tat;
    cout << "\nEnter Process Burst Time\n";
    for (i=0; i<n; i++) {
        cout << "P[" << i+1 << "]: ";
        cin >> bt[i];
    }
    wt[0] = 0;
    for (i=1; i<n; i++) {
        wt[i] = 0;
        for (j=0; j<i; j++) {
            wt[i] += bt[j];
        }
    }
    cout << "\nProcess\t\tBurst Time\tWaiting Time\tTurnaround Time";
    for (i=0; i<n; i++) {
        tat[i] = bt[i] + wt[i];
        tot_wt += wt[i];
        tot_tat += tat[i];
        cout << "\nP[" << i+1 << "]" << "\t\t" << bt[i] << "\t\t" << wt[i] << "\t\t" << tat[i];
    }
    avg_wt = tot_wt / i;
    avg_tat = tot_tat / i;
    cout << "\n\nAverage Waiting Time:" << avg_wt;
    cout << "\nAverage Turnaround Time:" << avg_tat;
    return 0;
}

// How to excute on cmd
// Go to file directory
// g++ -o fcfs fcfs.cpp
// ./fcfs.exe