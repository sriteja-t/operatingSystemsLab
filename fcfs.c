// ==========================
// == Process == Duration  ==
// ==========================
// ==   P1    ==    24     ==
// ==   P2    ==     5     ==
// ==   P3    ==    10     ==
// ==   P4    ==     6     ==
// ==========================

#include <stdio.h>

int	main(void)
{
	int bt[] = {24, 5, 10, 6};
	int n = sizeof bt / sizeof bt[0]; // Starts for 0
	int wt[n];
	int tt[n];
	wt[0] = 0; // Since the first process has no waiting time
	int tt_total=0;
    int wt_total = 0;
	for (int i = 0; i < n; i++)
	{
		if (i != 0)
		{
			wt[i] = bt[i - 1] + wt[i - 1];
		}
		tt[i] = wt[i] + bt[i];
		tt_total += tt[i];
		wt_total += wt[i];
		printf("\nCurrent Process: %d\n\tBurst Time: %d \n\tWaiting Time: %d\n\tTurnaround Time: %d", i+1, bt[i], wt[i], tt[i]);
	}
	printf("\n\nTotal Waiting Time: %d\nTotal Turnaround Time: %d", wt_total, tt_total);
    printf("\nAverage Waiting Time: %f\nAverage Turnaround Time: %f", (float)wt_total/n, (float)tt_total/n);
}

/*
Output:


Current Process: 1
	Burst Time: 24 
	Waiting Time: 0
	Turnaround Time: 24
Current Process: 2
	Burst Time: 5 
	Waiting Time: 24
	Turnaround Time: 29
Current Process: 3
	Burst Time: 10 
	Waiting Time: 29
	Turnaround Time: 39
Current Process: 4
	Burst Time: 6 
	Waiting Time: 39
	Turnaround Time: 45

Total Waiting Time: 92
Total Turnaround Time: 137
Average Waiting Time: 23.000000
Average Turnaround Time: 34.250000
*/
