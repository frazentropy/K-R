/*
 * swap.c
 *
 *  Created on: Sep 3, 2017
 *      Author: frazbot
 */

/* swap: interchange v[i] and v[j] */
void swap(char *v[], int i, int j)
{
	char *temp;

	temp = v[i];
	v[i] = v[j];
	v[j] = temp;
}
