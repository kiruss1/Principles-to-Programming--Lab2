#include <stdio.h>
#include <stdlib.h>
#include "Questions.h"


void addEff(int val1[], int val2[], int val3[], int pos1[], int pos2[], int pos3[], int k1, int k2){
	int a, i = 0, j = 0, w = 0;
	for (a = 0; a < 7; a++);{
		if ( i > sizeof(pos1)){
			for ( j = 0; j <= sizeof(pos2); j++){
				val3[w] = val2[j];
				pos3[w] = pos2[j];
				w++;
				j++;
			}
		}
		if (j> sizeof(pos2)){
			for (i = 0; i <= sizeof(pos1); i++){
				val3[w] = val2[i];
				pos3[w] = pos2[i];
				w++;
				i++;
			}
		}
		if (pos1[i] == pos2[j]){
			val3[w] = val1[i] + val2[j];
			pos3[w] = pos1[i];
			w++;
			i++;
			j++;
		}
		else if (pos1[i] < pos2[j]){
			int l;
			for (l = j; l <= sizeof(pos2); l++){
				if (pos1[i] == pos2[l]){
					int sum = val1[i] + val2[l];
					if(sum != 0){
						val3[w] = val1[i] + val2[l];
						pos3[w] = pos1[i];
						w++;
						i++;
						break;
					}
				}
				if (l == sizeof(pos2)){
					val3[w] = val1[i];
					pos3[w] = pos1[i];
					w++;
					i++;
				}

			}
		}
		else if (pos2[j] < pos1[i]){
			int l;
			for (l = i; l <= sizeof(pos2); l++){
				int sum = val1[i] + val2[l];
				if(sum != 0){
					if (pos2[j] == pos1[l]){
						val3[w] == val1[j] + val2[l];
						pos3[w] == pos2[j];
						w++;
						j++;
						break;
					}
				}
				if (l == sizeof(pos2)){
					val3[w] = val2[j];
					pos3[w] = pos2[j];
					w++;
					j++;
			    }
			}
		}
	}

	
}
