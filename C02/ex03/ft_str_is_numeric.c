/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybalkan <ybalkan@student.42kocaeli.com.tr>  #+#  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-12-02 08:23:41 by ybalkan           #+#    #+#             */
/*   Updated: 2025-12-02 08:23:41 by ybalkan          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int		y;

	y = 0;
	while (str[y] != '\0')
	{
		if (str[y] >= '0' && str[y] <= '9')
		{	
			y++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
