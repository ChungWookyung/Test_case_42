int	main(void)
{
	char *str1;
	char *str2;
	str1 = "Helo";
	str2 = "Helloo";
	printf("c  : %d\n", strncmp(str1, str2, 0));
	printf("ft : %d\n", ft_strncmp(str1, str2, 0));
}
