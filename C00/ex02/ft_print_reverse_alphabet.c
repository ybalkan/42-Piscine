/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybalkan <ybalkan@student.42kocaeli.com.tr>  #+#  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-12-01 18:58:46 by ybalkan           #+#    #+#             */
/*   Updated: 2025-12-01 18:58:46 by ybalkan          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	reverse;

	reverse = 'z';
	while (reverse >= 'a')
	{
		write(1, &reverse, 1);
		reverse--;
	}
}
