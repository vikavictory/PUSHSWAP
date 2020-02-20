//
// Created by Harper Deckard on 11/02/2020.
//
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

char		*get_tmp(char *buf, int j)
{
	char	*tmp;
	int		i;

	i = 0;
	if (!(tmp = (char*)malloc(sizeof(char) * (j + 10 + 1))))
		return (NULL);
	while (i < j + 10)
	{
		tmp[i] = buf[i];
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}

int main(int argc, char **argv)
		int y = 0;
		char *buf;
		char *tmp;
{
	int i = 1;
	int x = 0;
	int rd;

	if (!(buf = (char*)malloc(sizeof(char) * (100))))
		return (0);
	buf[9] = '\0';
	rd = read(0, buf, 100);
//	while ((rd = read(0, buf, 100)))
//	{
//		y += rd;
//		x += rd;
//		buf[y] = '\0';
//		if (x == 10)
//		{
//			tmp = get_tmp(buf, y);
//			free(buf);
//			buf = tmp;
//			x = 0;
//		}
//	}
	buf[rd] = '\0';
	printf("m2 buf %s\n", buf);
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
