/*
 * =====================================================================================
 *
 *       Filename:  sizeof.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  09/25/2018 11:07:26 AM
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

int main(){
    printf("%9s: %lu\n", "char",        sizeof(char));
    printf("%9s: %lu\n", "short",       sizeof(short));
    printf("%9s: %lu\n", "int",         sizeof(int));
    printf("%9s: %lu\n", "float",       sizeof(float));
    printf("%9s: %lu\n", "double",      sizeof(double));
    printf("%9s: %lu\n", "long",        sizeof(long));
    printf("%9s: %lu\n", "long long",   sizeof(long long));
    printf("%9s: %lu\n", "long double", sizeof(long double));
}
