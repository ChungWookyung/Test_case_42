/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shpark <shpark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 05:44:48 by shpark            #+#    #+#             */
/*   Updated: 2020/01/28 05:45:58 by shpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>
#include <stdio.h>
#include <limits.h>
#include "ft_putnbr_base.c"

int		main(void)
{
	ft_putnbr_base(-123456, "helo");
	printf("\n");
	fflush(stdout);
	ft_putnbr_base(INT_MIN, "0123456789");
	printf("\n");
	fflush(stdout);
	ft_putnbr_base(INT_MAX, "0123456789");
}
