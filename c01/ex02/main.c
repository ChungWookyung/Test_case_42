/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shpark <shpark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 03:44:46 by shpark            #+#    #+#             */
/*   Updated: 2020/01/28 04:05:05 by shpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_swap.c"

int     main(void)
{
    int a;
    int b;

    a = 1;
    b = 2;
    printf("before: %d %d\n", a, b);
    ft_swap(&a, &b);
    printf("before: %d %d\n", a, b);
}
