ex00 ft_strncmp.c

int	main(void)
{
	char *str1;
	char *str2;
	char *str3;
	char *str4;
	char *str5;
	char *str6;
	char *str7;
	char *str8;
	char *str9;
	str1 = "Hello";
	str2 = "apple";
	str3 = "";
	str4 = "ABCD";
	str5 = "abcdEghe";
	str6 = "Hello World!";
	str7 = "HelLO wOrLd!";
	str8 = "hELlo WoRld!";
	str9 = "z";
	printf("c  : %d\n", strcmp(str1, str2));
	printf("ft : %d\n", ft_strcmp(str1, str2));
	printf("c  : %d\n", strcmp(str3, str4));
	printf("ft : %d\n", ft_strcmp(str3, str4));
	printf("c  : %d\n", strcmp(str4, str5));
	printf("ft : %d\n", ft_strcmp(str4, str5));
	printf("c  : %d\n", strcmp(str4, str9));
	printf("ft : %d\n", ft_strcmp(str4, str9));
	printf("c  : %d\n", strcmp(str4, str5));
	printf("ft : %d\n", ft_strcmp(str4, str5));
	printf("c  : %d\n", strcmp(str6, str7));
	printf("ft : %d\n", ft_strcmp(str6, str7));
	printf("c  : %d\n", strcmp(str6, str8));
	printf("ft : %d\n", ft_strcmp(str6, str8));
}

ex01 ft_strncmp.c

int	main(void)
{
	char *str1;
	char *str2;
	str1 = "Helo";
	str2 = "Helloo";
	printf("c  : %d\n", strncmp(str1, str2, 0));
	printf("ft : %d\n", ft_strncmp(str1, str2, 0));
}

ex02 ft_strcat.c

int		main(void)
{
	char	*str_base;
	char	dest[100];
	char	dest2[100];
	char	*src;
	int		index;
	str_base = "Hello";
	src = " World";
	index = 0;
	while (index < 6)
	{
		dest[index] = str_base[index];
		dest2[index] = str_base[index];
		index++;
	}
	printf("c  : %s$\n", strncat(dest, src, 4));
	printf("ft : %s$\n", ft_strncat(dest2, src, 4));
}

ex03 ft_strncat.c

int		main(void)
{
	char	*str_base;
	char	dest[100];
	char	dest2[100];
	char	*src;
	int		index;

	str_base = "Hello";
	src = " World";
	index = 0;
	while (index < 6)
	{
		dest[index] = str_base[index];
		dest2[index] = str_base[index];
		index++;
	}
	printf("c  : %s$\n", strncat(dest, src, 4));
	printf("ft : %s$\n", ft_strncat(dest2, src, 4));
}

ex04 ft_strstr.c

int		main(void)
{
	char *haystack;
	char *needle;
	char *result_c;
	char *result_ft;
	haystack = "Foo Bar Baz";
	needle = "Bar";
	result_c = strstr(haystack, needle);
	result_ft = ft_strstr(haystack, needle);
	printf("%p / %p\n", result_c, result_ft);
	printf("c  : %s$\n", result_c);
	printf("ft : %s$\n", result_ft);
}

ex05 ft_strlcat.c

int				main(void)
{
	char	*str_base;
	char	dest[100];
	char	dest2[100];
	char	*src;
	int		index;
	str_base = "Hello";
	src = " World";
	index = 0;
	while (index < 6)
	{
		dest[index] = str_base[index];
		dest2[index] = str_base[index];
		index++;
	}
	printf("c  : (%lu) $%s$\n", strlcat(dest, src, 0), dest);
	printf("ft : (%d) $%s$\n", ft_strlcat(dest2, src, 0), dest2);
}
