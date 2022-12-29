#include <stdio.h>
#include <stdlib.h>
#include "Questions.h"


void efficient(const int source[], int val[], int pos[], int size){

	int counter = 0, i;

	for(i = 0; i < size; i++)
	{

		if (source[i] != 0)
		{

			val[counter] = source[i];
			pos[counter] = i;

			counter ++;
		}
	}

	

}

void reconstruct(int source[], int m, const int val[], const int pos[], int n){

	int i;

	for (i = 0; i < n; i++)
	{
		 if (pos[i] != 0)
		 {
			 source[pos[i]] = val[i];

		 }
	}

    
	

}
