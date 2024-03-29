#include <stdlib.h>
/**
  *argstostr - concat all arguments of the program.
  *@ac: argument number
  *@av: pointer to array of length ac.
  *Return: NULL if ac == 0 or av == nullpointer for new string
  */
char *argstostr(int ac, char **av)
{
	int i, j, k, leng;
	char *arg;

	leng = 0;
	k = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			leng++;
			j++;
		}
		leng++;
		i++;
	}
	arg = malloc((sizeof(char) * leng) + 1);
	if (arg == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			arg[k] = av[i][j];
			j++;
			k++;
		}
		arg[k] = '\n';
		k++;
		i++;
	}
	arg[k] = '\0';
	return (arg);
}

