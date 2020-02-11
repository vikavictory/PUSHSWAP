//
// Created by Harper Deckard on 11/02/2020.
//
#include <stdio.h>

int main(int argc, char **argv)
{
	int i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			printf("m2 %s\n", argv[i]);
			i++;
		}
	}
	return (0);
}
