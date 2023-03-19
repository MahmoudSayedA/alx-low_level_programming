
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: A C program that generate rundom number
 * and get the last digit of it
 *
 * Return: Always 0 (success)
*/


int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is %d\n", n, n % 10);
	return (0);
  
}
