/*
 * K-R-6.h
 *
 *  Created on: Sep 4, 2017
 *      Author: frazbot
 */

#ifndef K_R_6_H_
#define K_R_6_H_

#define	NKEYS	(sizeof keytab / sizeof keytab[0])	/* number of keywords in C */

struct key {	/* C language keywords */
	char *word;
	int count;
} keytab[32];

struct key *binarysearch(char *word, struct key *tab, int n);	/* find word in tab[0]..tab[n-1] */

int getword(char *word, int lim);	/* get next word or character from input */

int getch(void);		/* get a (possibly pushed back) character */
void ungetch(int c);	/* push character back on input */

#endif /* K_R_6_H_ */
