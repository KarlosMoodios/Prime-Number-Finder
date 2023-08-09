#include <iostream>
#include <conio.h>
#include <windows.h>
#include <math.h>
using namespace std;

void main(void)
{
	long i, j;
	int flag;

	DWORD starttime, endtime;
	float totaltime;

	starttime = GetTickCount();//get start time

	for (i = 3; i<100000; i = i + 2)//numbers to check if prime
	{
		flag = 0;

		for (j = 3; j<i; j = j + 2)
		{
			if (i%j == 0) { flag = 1; }
		}
		if (flag == 0) { cout << i << " is prime!\n "; continue; }
		//else { cout << i << " is NOT prime!\n "; }
	}
	endtime = GetTickCount();//get finish time
							 //calc time
	totaltime = ((float)endtime - (float)starttime) / 1000.0;//calculate total time in secs
	cout << "Totaltime=" << totaltime << " sec\n";

	printf("Press any key to end....where's the any key?");

	_getch();
}