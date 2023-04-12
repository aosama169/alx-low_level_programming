#include <stdlib.h>
/**
  *argstostr - concat all arguments of the program.
  *@ac: argument number
  *@av: pointer to array of len ac.
  *Return: NULL if ac == 0 or av == null, Pointer to new string
  */
char *argstostr(int ac, char **av)
{
	int i, j, k, len;
	char *arg;

	len = 0;
	k = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			len++;
			j++;
		}
		len++;
		i++;
	}
	arg = malloc((lenof(char) * len) + 1);
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

