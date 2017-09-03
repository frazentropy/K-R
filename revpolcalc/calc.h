/*
 * calc.h
 *
 *  Created on: Sep 2, 2017
 *      Author: frazbot
 */

#ifndef CALC_H_
#define CALC_H_

#define	NUMBER	'0'

void push(double);
double pop(void);
int getop(char[]);
int getch(void);
void ungetch(int);

#endif /* CALC_H_ */
