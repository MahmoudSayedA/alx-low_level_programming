bash: bretty: command not found
root@4cfd6d3ff2f4:/alx-low_level_programming/0x01-variables_if_else_while# betty 1-last_digit.c

========== 1-last_digit.c ==========
  1-last_digit.c:18: WARNING: Missing a blank line after declarations
  1-last_digit.c:22: ERROR: trailing whitespace
  1-last_digit.c:22: WARNING: please, no spaces at the start of a line
  total: 1 errors, 2 warnings, 23 lines checked
main
  root@4cfd6d3ff2f4:/alx-low_level_programming/0x01-variables_if_else_while# emacs 1-last_digit.c
  root@4cfd6d3ff2f4:/alx-low_level_programming/0x01-variables_if_else_while# emacs 3-print_alphabets.c
  root@4cfd6d3ff2f4:/alx-low_level_programming/0x01-variables_if_else_while# emacs 4-print_alphabt.c
  root@4cfd6d3ff2f4:/alx-low_level_programming/0x01-variables_if_else_while# ls
0-positive_or_negative.c  1-last_digit.c  3-print_alphabets.c  4-print_alphabt.c  README.md
  root@4cfd6d3ff2f4:/alx-low_level_programming/0x01-variables_if_else_while# mv 3-print_alphabets.c  2-print_alphabet.c
  root@4cfd6d3ff2f4:/alx-low_level_programming/0x01-variables_if_else_while# ls
0-positive_or_negative.c  1-last_digit.c  2-print_alphabet.c  4-print_alphabt.c  README.md
  root@4cfd6d3ff2f4:/alx-low_level_programming/0x01-variables_if_else_while# emacs 3-print_alphabets.c
  root@4cfd6d3ff2f4:/alx-low_level_programming/0x01-variables_if_else_while# emacs 5-print_numbers.c
  root@4cfd6d3ff2f4:/alx-low_level_programming/0x01-variables_if_else_while# emacs 6-print_numberz.c
  root@4cfd6d3ff2f4:/alx-low_level_programming/0x01-variables_if_else_while# emacs
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

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
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	x = n % 10;
	printf("Last digit of %d is %d ", n, x);
	if (x > 5)
	{
		printf("and is greater than 5");
	}
	if (x == 0)
	{
		printf("and is 0");
	}
	if (x < 6 && x != 0)
	{
		printf("and is less than 6 and not 0");
	}

	printf("\n");

	return (0);
}

