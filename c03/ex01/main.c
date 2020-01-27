/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shpark <shpark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 05:37:09 by shpark            #+#    #+#             */
/*   Updated: 2020/01/28 05:37:36 by shpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "ft_strncmp"

int	main(void)
{
	char *str1;
	char *str2;

	str1 = "Helo";
	str2 = "Helloo";
	printf("c  : %d\n", strncmp(str1, str2, 0));
	printf("ft : %d\n", ft_strncmp(str1, str2, 0));
}
