ex00 ft_iterative_factorial.c
int	main(void)
{
	int n;
	n = -2;
	while (n < 7)
	{
		printf("fact(%d) = %d\n", n, ft_iterative_factorial(n));
		n++;
	}
}
ex01 ft_recursive_factorial.c
int	main(void)
{
	int n;
	n = -2;
	while (n < 7)
	{
		printf("fact(%d) = %d\n", n, ft_recursive_factorial(n));
		n++;
	}
}
ex02 ft_iterative_power.c

int	main(void)
{
	printf("10^2 = %d\n", ft_iterative_power(10, 2));
	printf("10^0 = %d\n", ft_iterative_power(10, 0));
	printf("10^-1 = %d\n", ft_iterative_power(10, -1));
	printf("10^5 = %d\n", ft_iterative_power(10, 5));
}

ex03 ft_recursive_power.c

int	main(void)
{
	printf("10^2 = %d\n", ft_recursive_power(10, 2));
	printf("10^0 = %d\n", ft_recursive_power(10, 0));
	printf("10^-1 = %d\n", ft_recursive_power(10, -1));
	printf("10^5 = %d\n", ft_recursive_power(10, 5));
}

ex04 ft_fibonacci.c

int	main(void)
{
	int	index;
	index = -2;
	while (index < 16)
	{
		printf("fibonacci(%d) = %d\n", index, ft_fibonacci(index));
		index++;
	}
}

ex05 ft_sqrt.c

int	main(void)
{
	int number;
	number = -2;
	while (number < 26)
	{
		printf("sqrt(%d) = %d\n", number, ft_sqrt(number));
		number++;
	}
	printf("sqrt(%d) = %d\n", 1000000, ft_sqrt(1000000));
	printf("sqrt(%d) = %d\n", 2147483647, ft_sqrt(2147483647));
	printf("sqrt(%ld) = %d\n", -2147483648, ft_sqrt(-2147483648));
	printf("sqrt(%d) = %d\n", 2147395600, ft_sqrt(2147395600));
}

ex06 ft_is_prime.c

int	main(void)
{
	int	number;
	int	results[2];
	int	count;
	number = 0;
	count = 0;
	while (number < 50000)
	{
		results[0] = is_prime(number);
		results[1] = ft_is_prime(number);
		printf("is_prime(%d) = %d  --  %d\n", number, results[1], results[0]);
		if (results[0] != results[1])
			return (1);
		number++;
		if (results[0])
			count++;
	}
	printf("is_prime(%d) = %d\n", INT_MAX, is_prime(INT_MAX));
	printf("first 50'000 number, %d prime\n", count);
	return (0);
}

ex07 ft_find_next_prime.c

int	main(void)
{
	int	index;
	index = -2;
	while (index < 100)
	{
		printf("find_next_prime(%d) = %d\n", index, ft_find_next_prime(index));
		index++;
	}
	printf("find_next_prime(%d) = %d\n", INT_MAX, ft_find_next_prime(INT_MAX));
}

ex08 ft_ten_queens_puzzle.c

int		main(void)
{
	ft_ten_queens_puzzle();
}
