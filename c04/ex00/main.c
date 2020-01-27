/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shpark <shpark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 05:42:52 by shpark            #+#    #+#             */
/*   Updated: 2020/01/28 05:43:16 by shpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "ft_strlen.c"

int	main(void)
{
	char *str;

	str = "Hello ";
	printf("c  : %lu\n", strlen(str));
	printf("ft : %d\n", ft_strlen(str));
}
