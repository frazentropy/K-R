/*
 * binarysearch.c
 *
 *  Created on: Sep 4, 2017
 *      Author: frazbot
 */


#include <string.h>
#include "K-R-6.h"

/* binarysearch: find word in tab[0]...tab[n-1] */
struct key *binarysearch(char *word, struct key *tab, int n)
{
	int cond;

	struct key *low = &tab[0];
	struct key *high = &tab[n];
	struct key *mid;

	while (low < high) {
		mid = low + (high-low) / 2;
		if ((cond = strcmp(word, mid->word)) < 0)
			high = mid;
		else if (cond > 0)
			low = mid + 1;
		else
			return mid;
	}
	return NULL;
}
