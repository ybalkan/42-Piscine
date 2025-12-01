/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybalkan <ybalkan@student.42kocaeli.com.tr>  #+#  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-12-01 19:00:09 by ybalkan           #+#    #+#             */
/*   Updated: 2025-12-01 19:00:09 by ybalkan          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	char	y;
	char	b;

	y = 0;
	b = 0;
	while (y <= 99)
	{
		b = y + 1;
		while (b <= 99)
		{
			ft_putchar(y / 10 + '0');
			ft_putchar(y % 10 + '0');
			ft_putchar(' ');
			ft_putchar(b / 10 + '0');
			ft_putchar(b % 10 + '0');
			if (y != 98 || b != 99)
			{
				write(1, &", ", 2);
			}
			b++;
		}
		y++;
	}
}
