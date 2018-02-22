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