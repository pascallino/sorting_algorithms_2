#include <stdio.h>
#include <stdlib.h>
#include "../sort.h"

/**
 *  * main - Entry point
 *   *
 *    * Return: Always 0
 *     */
int main(void)
{
	int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
	/*int array[] = {81, 89, 9, 11, 14, 76, 54, 22};*/
	size_t n = sizeof(array) / sizeof(array[0]);

	print_array(array, n);
	printf("\n");
	heap_sort(array, n);
	printf("\n");
	print_array(array, n);
	return (0);
}
