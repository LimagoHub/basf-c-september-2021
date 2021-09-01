// Aerger.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <stdio.h>
#include <string.h>
#include <malloc.h>

char * createString(char c)
{
	char string[11];
	memset(string, 0, 11);
	for(int i = 0; i < 10; i ++)
	{
		string[i] = c;
	}
	return string;
}


char* createStringAnders(char * toFill,size_t size,char c)
{
	
	memset(toFill, 0, size);
	for (int i = 0; i < size - 1; i++)
	{
		toFill[i] = c;
	}
	return toFill;
}

char* createStringGanzAnders(size_t size, char c)
{
	char* buffer = malloc(size + 1);
	memset(buffer, 0, size + 1);
	for (int i = 0; i < size; i++)
	{
		buffer[i] = c;
	}
	return buffer;
}


int main()
{
	int size = 10;
	int buffer_a[20];
	int buffer_b[20];

	for (int i = 0; i < 20; ++i)
	{
		buffer_a[i] = i * 10;
	}

	memcpy(buffer_b, buffer_a, 20 * sizeof(int));
	
	// char* ptr = createStringGanzAnders(10, 'A');
	//
	// printf("%s\n", ptr);
	//
	// free(ptr);
}

