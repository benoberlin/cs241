/*
 * =====================================================================================
 *
 *       Filename:  getnput.c
 *
 *    Description:  Gets a character and then spits it back
 *
 *        Version:  1.0
 *        Created:  09/13/2018 11:24:05 AM
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

int main() {
    int input;
    
    while(EOF != (input = getchar())) {
	putchar(input);
    }
}

