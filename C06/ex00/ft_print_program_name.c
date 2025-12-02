/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybalkan <ybalkan@student.42kocaeli.com.tr>  #+#  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-12-02 08:29:28 by ybalkan           #+#    #+#             */
/*   Updated: 2025-12-02 08:29:28 by ybalkan          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	main(int argc, char **argv)
{
	int	y;

	y = 0;
	if (argc > 0)
	{
		while (argv[0][y] != '\0')
		{
			write(1, &argv[0][y], 1);
				y++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
