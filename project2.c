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

int parseFactor(){

	// DIGITS
	if (*x >= '0' && *x <= '9') // Digits from 0 to 9
	{
		return *x++ - '0';
	} 
	else
	{
		printf("expected digit but found %c\n", +x); // Checks for error
	}

}

int main(){
	x = "2*3+4*5";
	int result = parseFactor();
	return 0;
}

/** 

Part 1: Implementing a recursive-descent parser for the grammar of arthmetic expressions

1. Must read successive expressions from input 
	if well formed: then print parse tree
	else: print a message and resume to next line of input

Note: must be able to parse products, sums, exponential equations, divisions

*/


int parseSum();
int parseProduct();
int parseNumber(){
	if (* x >= '0' && *x <= '9')
	{
		//Checks for valid digit within bounds
		return *x++ - '0';
		//returns x subtracting the ASCII code of 0 and moves pointer to next input
	}
	else{
		printf("Parse Error: Attempted to parse but found invalid character: %s\n", *x);
	}
}

