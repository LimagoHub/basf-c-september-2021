// First.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//
// Präprozessor

#include <stdio.h>

int stringlength(char * pointer)
{
	register int length = 0;
	while (pointer[length])
		length++;
	return length;
}

void stringcopy(char * destination, char * source)
{
	while (*destination++ = *source++);
}


void foo(int* , size_t );



int main(int argc, char ** argv, char **env)
{

	while(*env)
	{
		printf("%s\n", *env++);
	}
	
	// for (int i = 0; i < argc; ++i)
	// {
	// 	printf("%s\n", argv[i]);
	// }
	
// 	int feld1[] /* *feld1 */ = {10,20,30};
// 	int feld2[] /* *feld2 */ = { 40,50,60, 70 };
//
// 	int* grossesFeld[] = { feld1, feld2 };
//
// 	int** ptr;
//
// 	ptr = grossesFeld;
//
// 	printf("%d\n",grossesFeld[0][0]);
// 	printf("%d\n", **grossesFeld);
// 	printf("%d\n", *(*(ptr + 1)+1));
//
// 	
// 	/*char name[] = "Herbert";
// 	char buffer[10];
// 	
// 	stringcopy(buffer, name);
//
// 	
// 	name[7] = 'X';
// 	
// 	printf("%s\n", name);*/
//
// 	
// 	
// 	return 0;
}

void foo(int* a, size_t size)
{
	for (size_t i = 0; i < size; ++i)
	{
		printf("%d\n", a[i]);
	}

}