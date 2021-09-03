#include <stdio.h>
#include <limits.h>

int find_max_value(int * array, size_t size)
{
	if (size == 0) return INT_MIN;

	int first = *array;
	int max_of_rest = find_max_value(++array, --size);

	return first > max_of_rest ? first : max_of_rest;
}

int main()
{
	int feld[] = {1,99,18, 30,  2, 11, 47, 20};

	int max = find_max_value(feld, sizeof(feld) / sizeof(int));
	printf("%d\n", max);
}


