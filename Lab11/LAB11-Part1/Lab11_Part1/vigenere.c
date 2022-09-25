/*
   vigenere.c

   Sample program for CO222 Lab11-Part1
*/

#include <stdio.h>
#include <ctype.h>

#include "vigenere.h"

#define MAX_COL  80

void encrypt( int ch )
{
  /*
    These variables are declared "static" because they need to
    keep their values from one call of encrypt() to another.
    They will be initialized the first time encrypt() is called.
    After that, they will keep the value from the previous call.
  */
  static char *p = key;
  static int col = 1;
  int i,j,k;

  if( isalpha(ch)) {
    /*
      convert all characters to lowercase,
      perform vigenere encoding
      and print encoded character
    */
    i = tolower(ch) - 'a';
    j = tolower(*p) - 'a';
    k = ( i + j ) % 26;
    ch= k + 'a';
    putchar( ch );
    /*
      if we have filled a row,
      print newline and start a new row
    */
    col++;
    if( col == MAX_COL ) {
      putchar( '\n' );
      col = 1;
    }
    /*
      move to next character of key.
      if we have reached end of key, go back to beginning
    */
    p++;
    if( *p == '\0' ) {
         p = key;
    }
  }
}
