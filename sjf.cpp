#include <iostream>
using namespace std;

int* bubbleSort(int n, int* array) {
  for (int step = 0; step < n; ++step) {
    for (int i = 0; i < n - step; ++i) {
      if (array[i] > array[i + 1]) {
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
      }
    }
  }
  return array;
}

int main()
{
	int n, i;
	cout << "Enter n: ";
	cin >> n;
	float n_float = n;
	int bt[n], wt[n], tat[n];
	float tot_wt, tot_tat, avg_wt, avg_tat;
	for (i=0; i<n; i++) {
		cout << "BT[" << i << "]: ";
		cin >> bt[i];
	}
	int *sorted_bt = bubbleSort(n, bt);
	wt[0] = 0;
	tat[0] = bt[0] + wt[0];
	for (i=1; i<n; i++) {
		wt[i] = bt[i-1] + wt[i-1];
		tat[i] = bt[i] + wt[i];
	}
	cout << "\nPID\t\t" << "BT\t\t" << "WT\t\t" << "TAT\n";
	for (i=0; i<n; i++) {
		cout << i << "\t\t" << bt[i] << "\t\t" << wt[i] << "\t\t" << tat[i] << "\n";
		tot_wt = tot_wt + wt[i];
		tot_tat = tot_tat + tat[i];
	}
	avg_wt = tot_wt / n_float;
	avg_tat = tot_tat / n_float;
	cout << "\nAverage WT: " << avg_wt << "\n";
	cout << "Average TAT: " << avg_tat << "\n";
	return 0;
}