/*
 * main.c
 *
 *  Created on: Sep 3, 2017
 *      Author: frazbot
 */

#include <stdio.h>
#include "K-R-5.h"

#define	MAXLINES	5000	/* max #lines to be sorted */

char *lineptr[MAXLINES];	/* pointers to text lines */

/* sort input lines */
int main()
{
	int nlines;	/* number of input lines to read */

	if ((nlines = readlines(lineptr, MAXLINES)) >= 0) {
		quicksort(lineptr, 0, nlines-1);
		writelines(lineptr, nlines);
		return 0;
	} else {
		printf("error: input too big to sort\n");
		return 1;
	}
	return 0;
}
