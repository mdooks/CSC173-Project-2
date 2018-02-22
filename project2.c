/*
 Name: Kim Sitthisack & Melanie Dookharan
 Project 2: Grammars and Parsing
 Date: 21 Feburary 2018

 Implement a recursive-descent parser 
 for the grammar of arithmetic expressions

*/


#include <stdio.h>



char * x; // global variable

int parseFactor();
int parseProduct();
int parseSum();



// Is there something to multiply?
int parseProduct(){
	int fac1 = parseFactor(); // First digit
	while (*x == '*') // Char equals the multiplication sign
	{
		++x; // point to the next character
		int fac2 = parseFactor(); // Second digit
		fac1 = fac1 * fac2;
	}

	// When there are no more multiplication symbols
	return fac1;
}

int parseFactor(){

	// DIGITS
	if (*x >= '0' && *x <= '9') // Digits from 0 to 9
	{
		return *x++ - '0';
	} 
	else
	{
		printf("expected digit but found %c\n", *x); // Checks for error
	}

}

int main(){
	x = "2*3+4*5";
	int result = parseProduct();
	return 0;
}

/** 

Part 1: Implementing a recursive-descent parser for the grammar of arthmetic expressions

1. Must read successive expressions from input 
	if well formed: then print parse tree
	else: print a message and resume to next line of input

*/