/* 	Scheduling algorithm 
Write a program in C/CPP to take process name, its arrival time and execution/burst time as input. 
	Use FCFS(non-preemptive) algorithm to calculate wait time of each process, average 
wait time, turnaround time of each process and average turnaround time. 
	Calculation of time will start from the arrival time of first process.
execution/burst time - Time required for execution of process
	Wait time of process = response time of process - arrival time process
	Response time of process : time at which process is scheduled to run
	Average wait time = (sum of wait time of each process) / (number of processes) 
	Turnaround time of process = (finish/completion time of process) - (arrival time of process)
	Average turnaround time = (sum of turnaround time of each process) / (number of processes) 
 */

#include <iostream>
#include <string>
#include <cstring>
#include <queue>
#include <ctime>

using namespace std;

struct pstruct
{
    string process;
    double arrival_time;
    double execution_time;
};
queue<pstruct> sch_queue;
void FCFS()
{
    double currentime = 0;
    double comp_time = 0;

    double compeletion_time[100];
    double turn_around_time[100];
    double waiting_time[100];
    int i = 0;
    while (!sch_queue.empty())
    {
        struct pstruct q1 = sch_queue.front();
        if (currentime < q1.arrival_time)
        {

            currentime = q1.arrival_time;
        }

        double comp_time = currentime + q1.execution_time;
        currentime = comp_time;

        compeletion_time[i] = comp_time;
        turn_around_time[i] = comp_time - q1.arrival_time;
        waiting_time[i] = turn_around_time[i] - q1.execution_time;

        sch_queue.pop();
        i++;
    }

    double sumturn = 0;
    double sumwait = 0;
    for (int j = 0; j < i; j++)
    {

        sumturn = sumturn + turn_around_time[j];
        sumwait = sumwait + waiting_time[j];
    }

    double avg_turnaround = sumturn / i;
    double avg_waiting_time = sumwait / i;
    cout << "avg turn around time is : " << avg_turnaround << " avg waiting time is:  " << avg_waiting_time << endl;
}

int main()
{

    while (1)
    {
        struct pstruct p;
        string process;
        cout << "enter process name" << endl;
        cin >> process;
        if (process == "end")
            break;
        p.process = process;
        double arrival_time;
        cout << "enter arrival time name" << endl;
        cin >> arrival_time;
        p.arrival_time = arrival_time;
        double execution_time;
        cout << "enter burst time /execution time" << endl;
        cin >> execution_time;
        p.execution_time = execution_time;
        sch_queue.push(p);
    }

    FCFS();

    return 0;
}
