#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entery point
 *
 * Description: A C program that generate rundom number
 * and check if it is positive or not
 *
 * Return: Always 0 (success)
*/


int main(void)
{
  int n;
  srand(time(0));
  n = rand() - RAND_MAX / 2;
  printf("%d is ", n);
  if (n > 0)
	  printf("positive\n");
  else if (n < 0)
	  printf("negative\n");
  else
	  printf("zero\n");
  return (0);
}
