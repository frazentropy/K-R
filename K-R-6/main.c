/*
 * main.c
 *
 *  Created on: Sep 4, 2017
 *      Author: frazbot
 */


#include <stdio.h>
#include <ctype.h>
#include "K-R-6.h"

#define	MAXWORD	100

/* count C keywords */
int main()
{
	char word[MAXWORD];
	struct key *p;

	while (getword(word, MAXWORD) != EOF)
		if (isalpha(word[0]))
			if ((p=binarysearch(word, keytab, NKEYS)) != NULL)
				p->count++;
	for (p = keytab; p < keytab + NKEYS; p++)
		if (p->count > 0)
			printf("%4d %s\n", p->count, p->word);
	return 0;
}
