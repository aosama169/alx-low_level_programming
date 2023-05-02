

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - return the square root of an int
 * @n: number to calculate the square root
 *
 * Return: the result square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recurse to find the square root
 * @n: number to calculate the sqaure root
 * @i: iterator
 *
 * Return: the result square root
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}

