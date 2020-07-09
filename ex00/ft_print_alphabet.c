/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmhone <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 12:32:03 by bmhone            #+#    #+#             */
/*   Updated: 2020/07/09 15:08:20 by bmhone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char x);

void	ft_print_alphabet(void)	{
	char	start;
	char	end;

	start = 'a';
	end = 'z';
	while (start <= end)	{
		ft_putchar(start);
		start++;
	if (start > end)	{
		write(1, "\n", 1);
	}
	}
}

void	ft_putchar(char x)	{
	write(1, &x, 1);
}
