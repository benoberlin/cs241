/*
 * =====================================================================================
 *
 *       Filename:  strcpy.c
 *
 *    Description:  strcpy copies a string from dst to src, assuming the buffers have
 *		    been set up already and can hold the strings plus the null
 *		    terminator
 *		    Returns: char * with start of copied string
 *
 *        Version:  1.0
 *        Created:  10/11/2018 11:44:47 AM
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

char * strcpy(char *dst, const char *src) {
    char *ret = dst
    while(*dst++ = *src++){}
    return ret;
}
