/*
 * K-R-5.h
 *
 *  Created on: Sep 3, 2017
 *      Author: frazbot
 */

#ifndef K_R_5_H_
#define K_R_5_H_

#undef getline

void swap(char *v[], int i, int j);	/* interchange *v[i] and *v[j] */

int getch(void);				/* from K-R-4 */
void ungetch(int);				/* from K-R-4 */
int getint(int *pn);			/* get next integer from input into *pn */

char *alloc(int n);				/* return pointer to n characters */
void afree(char *p);			/* free storage pointed to by p */

int getln(char *s, int lim);						/* K-R-1 */
int readlines(char *lineptr[], int nlines);		/* read input lines */
void writelines(char *lineptr[], int nlines);	/* write output lines */

void quicksort(char *lineptr[], int left, int right);	/* sort v[left]...v[right] into increasing order */


#endif /* K_R_5_H_ */
