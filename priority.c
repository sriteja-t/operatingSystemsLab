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
	struct			Process
	{
		int			pid;
		int			burstTime;
		int			priority;
	};

	int n = 3;
	struct Process	bt[n];
	bt[0].pid = 1;
	bt[0].burstTime = 24;
	bt[0].priority = 1;
	bt[1].pid = 2;
	bt[1].burstTime = 5;
	bt[1].priority = 2;
	bt[2].pid = 3;
	bt[2].burstTime = 10;
	bt[3].priority = 3;
	bt[3].pid = 4;
	bt[3].burstTime = 6;
	bt[3].priority = 4;
	int				wt[n];
	int				tt[n];
	struct Process	temp;
	// Sort process by Priority
	for (int i = 0; i != n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (bt[j].priority < bt[i].priority)
			{
				temp = bt[i];
				bt[i] = bt[j];
				bt[j] = temp;
			}
		}
	}
	// Calculate Waiting Time, Turn around time
	wt[0] = 0;
	int wt_total = 0;
	int tt_total = 0;
	for (int i = 0; i != n + 1; i++)
	{
		if (i != 0)
		{
			wt[i] = wt[i - 1] + bt[i - 1].burstTime;
		}
		tt[i] = bt[i].burstTime + wt[i];
		tt_total += tt[i];
		wt_total += wt[i];
		printf("\nCurrent Process: %d\n\tBurst Time: %d\n\tWaiting Time: %d\n\tTurnaround Time: %d", bt[i].pid, bt[i].burstTime, wt[i], tt[i]);
	}
	printf("\n\nTotal Waiting Time: %d\nTotal Turnaround Time: %d", wt_total, tt_total);
	printf("\nAverage Waiting Time: %f\nAverage Turnaround Time: %f", (float)wt_total / (n + 1), (float)tt_total / (n + 1));
}

/*

Output:


Current Process: 2
	Burst Time: 5
	Waiting Time: 0
	Turnaround Time: 5
Current Process: 4
	Burst Time: 6
	Waiting Time: 5
	Turnaround Time: 11
Current Process: 3
	Burst Time: 10
	Waiting Time: 11
	Turnaround Time: 21
Current Process: 1
	Burst Time: 24
	Waiting Time: 21
	Turnaround Time: 45

Total Waiting Time: 37
Total Turnaround Time: 82
Average Waiting Time: 9.250000
Average Turnaround Time: 20.500000

*/
