/*
 * main.c
 * by Kevin Uriel Azuara Fonseca
 * Title: Digital Lab 1 (Digital Circuits)
 * 
 * 
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	int A = 0;
	int B = 0;
	int chooseColorToTest = 0;
	printf("Enter number A. [Press 0-(ZERO) to Ignore]\n");
	scanf("%d", &A);
	printf("Enter number B. [Press 0-(ZERO) to Ignore]\n");
	scanf("%d", &B);
	printf("Enter color to TEST:\nPress 7 for Orange\nPress 8 for Yellow\nPress 9 for Green\n");
	scanf("%d", &chooseColorToTest);
	if (chooseColorToTest == 7) {
		if (A == 0 && B == 0) {
			printf("Orange led is off");
		} else if (A == 0 && B == 1) {
			printf("Orange led is off");
		} else if (A == 1 && B == 0) {
			printf("Orange led is off");
		} else {
			printf("Orange led is on");
		}
	} else if (chooseColorToTest == 8) {
		if (A == 0 && B == 0) {
			printf("Yellow led is off");
		} else if (A == 0 && B == 1) {
			printf("Yellow led is on");
		} else if (A == 1 && B == 0) {
			printf("Yellow led is on");
		} else {
			printf("Orange led is on");
		}
	} else if (chooseColorToTest == 9) {
		if (A == 0 && B == 0) {
			printf("Green led is off");
		} else if (A == 0 && B == 1) {
			printf("Green led is on");
		} else if (A == 1 && B == 0) {
			printf("Green led is on");
		} else {
			printf("Green led is on");
		}
	}
	printf("\nEnd of program");
	return 0;
}

