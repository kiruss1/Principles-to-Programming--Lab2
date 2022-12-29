#include <stdio.h>
#include <stdlib.h>

#include "Questions.h"
#define N 4

void diag_scan(int mat [][N3], int arr [])
{
	for(int k = 0; k < N; k++)
	{
		int i = k;
		int j = 0;
		while (i >= 0)
		{

			i= i - 1;
			j= j + 1;
		}
	}

	for (int k = 1; k < N; k++)
	{
		int i = N - 1;
		int j = k;
		while(j<N)
		{

			i= i - 1;
			j= j + 1;

		}
	}

	
}
