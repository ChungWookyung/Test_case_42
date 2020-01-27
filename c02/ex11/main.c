/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shpark <shpark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 04:46:56 by shpark            #+#    #+#             */
/*   Updated: 2020/01/28 04:50:39 by shpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		main(void)
{
	char	*buffer;
	long	length;
	FILE	*f;
	char	*string;

	string = "Coucou\ntu vas bien ?";
	printf("real string : %s",string);
	ft_putstr_non_printable(string);
	printf("changed string : %s", string);
	
	buffer = 0;
	f = fopen("blah.bin", "rb");
	if (f)
	{
		fseek(f, 0, SEEK_END);
		length = ftell(f);
		fseek(f, 0, SEEK_SET);
		buffer = malloc(length);
		if (buffer)
		{
			fread(buffer, 1, length, f);
		}
		fclose(f);
	}
	printf("real string : %s",buffer);
	ft_putstr_non_printable(buffer);
	printf("changed string : %s", buffer);
}
