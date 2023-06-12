/*
 ============================================================================
 Name        : Practice.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void printHello(){
	printf("Hello World! My name is Amanda\n\n"); /* prints !!!Hello World!!! */
	printf("I am learning C.\n");
}

void printPattern(){
	printf("*\n");
	printf("**\n");
	printf("***\n");
	printf("****\n\n\n");
}

void printNumbers(){
	printf("These are the numbers from 1 to 10 :\n\n");
	int i; // Variable for integer //
	for (i = 1; i<= 10; i++)
	printf("%d \t", i);
}
int performCalculation(){
	int numx, numy;
	int addition, subtraction, product;
	float quotient;

	//enter the two integers//
	printf("\n\n\nEnter the first integer:");
	scanf("%d", &numx);
	printf("Enter the second integer:");
	scanf("%d", &numy);

	//do the calculations//
	addition = numx + numy;
	subtraction = numx - numy;
	product = numx * numy;
	quotient = (float)numx / numy;

	//print the results//
	printf("addition: %d\n", addition);
	printf("subtraction: %d\n", subtraction);
	printf("product: %d\n",product);
	printf("quotient: %.2f\n",quotient);

	return 0;

}

unsigned long long calculateFactorial(){
	int number;
	unsigned long long factorial = 1 ;

	//input the number
	printf("\n\n\nEnter a non-negative integer:");
	scanf("%d", &number);

	//Calculate the factorial
	if (number < 0) {
		printf("Error: Factorial is not defined for negative numbers.\n");
	} else {
		for (int i =1; i <= number; i++) {
			factorial *= i;
		}

		//Display the Factorial
		printf("Factorial of %d = %llu\n", number, factorial);
	}


	return factorial;
}

int main(){
	printHello();
	printPattern();
	printNumbers();
	performCalculation();
	calculateFactorial();

	return 0;
}

