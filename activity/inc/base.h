/**
* @file base.h
*
*/
#ifndef __BASE_H__
#define __BASE_H__

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include <math.h>

int convertbinarytodecimal(long long n);
long long convertdecimaltobinary(int n);
long long convertOctalToDecimal(int octalNumber);
int convertDecimalToOctal(int decimalNumber);
int decimal_to_hexadecimal(int x);
long long int hexa_binary(char hex[]);
long long int binary_oct(long long binary);
int convertbitooctal(long long bin);
long long int hexa_oct(char hex[]);
long long convertocttobi(int oct);
int string_length(char s[]);
int binary2decimal(char n[]);
void printHexDigit(int d);
void hextobin(char b[]);  

#endif /* #ifndef __BASE_H__ */
