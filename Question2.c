#include <stdio.h>
#include <stdlib.h>

#include "Questions.h"
#include "math.h"
#define N 3

int is_diag_dom(int mat[][N2])
{
	for(int row = 0; row < N; row++) //iterate over matrix
	{

    //this is the flag that is returned to tell whether the mat is diagonally
	   int isDiag=0;
    // sum of all columns in a row with absolute values and do not add any diagonal components
	   for (int col = 0; col < N; col++)
	   {
    //
		    if(row != col)
		    {
    //check to avoid adding any diagonal components
		    	isDiag = isDiag + fabs(mat[row][col]);
		    }

	   }
	
	//write your code below	//Return 1 if the matrix is diagonally dominant and 0 otherwise
	// verify that diagonal component is less than
	   if (fabs(mat[row][row]) < isDiag)
		   return isDiag;
	
	

	}

    return 1;
}
