ex00 strcpy
int		main(void)
{
	char *src;
	char dest[12];
	src = "Hello World";
	printf("base   : %s\n", src);
	strcpy(dest, src);
	printf("cpy    : %s\n", dest);
	ft_strcpy(dest, src);
	printf("ft_cpy : %s\n", dest);
}

ex01 strncpy

int		main(void)
{
	char *src;
	char dest[20];
	src = "Hello World";
	printf("base   : %s\n", src);
	strncpy(dest, src, 8);
	printf("cpy    : %s\n", dest);
	ft_strncpy(dest, src, 8);
	printf("ft_cpy : %s\n", dest);
}

ex02 strisalpha

int		main(void)
{
	char *str_valid;
	char *str_invalid;
	str_valid = "Hello";
	str_invalid = "Hell0";
	printf("should be 1: %d\n", ft_str_is_alpha(str_valid));
	printf("should be 0: %d\n", ft_str_is_alpha(str_invalid));
}

ex03 strisnumeric

int		main(void)
{
	char *str_valid;
	char *str_invalid;
	str_valid = "123456";
	str_invalid = "123A56";
	printf("should be 1: %d\n", ft_str_is_numeric(str_valid));
	printf("should be 0: %d\n", ft_str_is_numeric(str_invalid));
}
ex04 strislowcase

int		main(void)
{
	char *str_valid;
	char *str_invalid;
	str_valid = "hello";
	str_invalid = "hellO";
	printf("should be 1: %d\n", ft_str_is_lowercase(str_valid));
	printf("should be 0: %d\n", ft_str_is_lowercase(str_invalid));
}

ex05 strisuppercase

int		main(void)
{
	char *str_valid;
	char *str_invalid;
	str_valid = "HELLO";
	str_invalid = "HELLo";
	printf("should be 1: %d\n", ft_str_is_uppercase(str_valid));
	printf("should be 0: %d\n", ft_str_is_uppercase(str_invalid));
}
ex06 strisprintable

int		main(void)
{
	char *str_valid;
	char *str_invalid;
	str_valid = "Hell0";
	str_invalid = "hello\7F";
	printf("should be 1: %d\n", ft_str_is_printable(str_valid));
	printf("should be 0: %d\n", ft_str_is_printable(str_invalid));
}

ex07 strupcase

int		main(void)
{
	char	*str_base;
	char	str_upper[6];
	int		index;
	str_base = "heLl0";
	index = 0;
	while (index < 6)
	{
		str_upper[index] = str_base[index] + 0;
		index++;
	}
	ft_strupcase(&str_upper[0]);
	printf("should be normal    : %s\n", str_base);
	printf("should be upper case: %s\n", str_upper);
}

ex08 strlowcase

int		main(void)
{
	char	*str_base;
	char	str_lower[6];
	int		index;
	str_base = "HELl0";
	index = 0;
	while (index < 6)
	{
		str_lower[index] = str_base[index] + 0;
		index++;
	}
	ft_strlowcase(&str_lower[0]);
	printf("should be normal    : %s\n", str_base);
	printf("should be lower case: %s\n", str_lower);
}

ex09 strcapitalize

int		main(void)
{
	char	*str_base;
	char	str_cap[36];
	int		index;
	//str_base = "salut, c0mment tu vas ? 42mots quarante-deux; cinquante+et+un";
	str_base = "Vk_(7X)Vmf#H'Fk?>8j@} /7VVxh3(X{6)Xb";
	index = 0;
	while (index < 37)
	{
		str_cap[index] = str_base[index] + 0;
		index++;
	}
	ft_strcapitalize(&str_cap[0]);
	//printf("base        : %s\n", str_base);
	//printf("capitalized : %s\n", str_lower);
	printf("%s\n", str_cap);
}

ex10 strlcpy

int				main(void)
{
	char	*string1;
	char	string2[2];
	string1 = "0";
	printf("base   : %s\n", string1);
	strlcpy(string2, string1, 1);
	printf("cpy c  : %s\n", string2);
	ft_strlcpy(string2, string1, 1);
	printf("cpy ft : %s\n", string2);
}

ex11 putstrnonprintable

int		main(void)
{
	char	*string;
	string = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(string);
}

ex12 printmemory

int		main(void)
{
	char	*string;
	string = "Bonjour les aminches\t\n\tc  est fou.tout.ce qu on peut faire avec...print_memory....lol.lol. ";
	ft_print_memory(string, 1500);
}
