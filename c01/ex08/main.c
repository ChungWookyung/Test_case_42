void	debug_dump_array(int numbers[], int size)
{
	int index;

	printf("[ ");
	index = 0;
	while (index < size)
	{
		printf("%d", numbers[index]);
		if (index != size - 1)
		{
			printf(", ");
		}
		index++;
	}
	printf(" ]");
}

int		main(void)
{
	int numbers[9];
	int *first_pointer;
	int index;

	index = 0;
	while (index < 9)
	{
		numbers[index] = 9 - (index + 1);
		index++;
	}
	first_pointer = &numbers[0];
	printf("before: ");
	debug_dump_array(numbers, 9);
	ft_sort_int_tab(first_pointer, 9);
	printf("\nafter : ");
	debug_dump_array(numbers, 9);
}
