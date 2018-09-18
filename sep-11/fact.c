/*
 * =====================================================================================
 *
 *       Filename:  fact.c
 *
 *    Description:  Calculates the factorial of a number
 *
 *        Version:  1.0
 *        Created:  09/11/2018 11:40:34 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Ben Saltz, bsaltz@oberlin.edu
 *   Organization:  Oberlin College
 *	   Course:  CSCI 241
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char** argv) {
    int count = 10;
    int fact = 1;
    for(int i=0; i < count; i++) {
	fact = fact * fact + 1;
	printf("fact: %d\n", fact);
    }
}
