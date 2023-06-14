/*
 ============================================================================
 Name        : Practice.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Leetcode Problem Reverse Integer
 ============================================================================
 */

#include <stdio.h>
#include <limits.h>

int reverse(int x){
	int reversed = 0;

	while (x != 0){
		//Check if reversing x causes overflow
		if (reversed > INT_MAX / 10 || reversed < INT_MIN / 10) {
			return 0;
		}

		reversed = (reversed * 10) + (x % 10);
		x /=10;
	}

	return reversed;

}

int main() {
	int x = 123;
	int reversed = reverse(x);

	printf("Reversed: %d\n",reversed);

	return 0;

}

