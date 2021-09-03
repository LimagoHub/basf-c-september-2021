// Quicksort.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <stdio.h>

void swap(int* array, int i, int j)
{
	int temp = array[i];
	array[i] = array[j];
	array[j] = temp;
}

void quicksort(int* array, int links, int rechts)
{
	int i = links;
	int j = rechts;

	int pivot = array[links + (rechts - links) / 2];

	while (i <= j)
	{
		while (array[i] < pivot) i++;
		while (array[j] > pivot) j--;
		if(i <= j)
		{
			swap(array, i, j);
			i++;
			j--;
		}
		if (links < j)
			quicksort(array, links, j);
		if (i < rechts)
			quicksort(array, i, rechts);

	}
}


void sort(int * array, size_t size)
{
	quicksort(array, 0, size - 1);
}


int main()
{
	int feld[] = { 10,23,499, 17,75,5,29 };

	size_t size = sizeof(feld) / sizeof(int);
	
	sort(feld,size);

	for (int i = 0; i < size; ++i)
	{
		printf("%d\n", feld[i]);
	}
}

