/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybalkan <ybalkan@student.42kocaeli.com.tr>  #+#  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-12-02 08:32:09 by ybalkan           #+#    #+#             */
/*   Updated: 2025-12-02 08:32:09 by ybalkan          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	y;
	int	b;

	y = argc - 1;
	b = 0;
	if (argc > 1)
	{
		while (y > 0)
		{
			b = 0;
			while (argv[y][b] != '\0')
			{
				write(1, &argv[yc][b], 1);
				b++;
			}
			write(1, "\n", 1);
			y--;
		}
	}
	return (0);
}
