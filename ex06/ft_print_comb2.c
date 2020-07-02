/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseo <tseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 11:29:03 by tseo              #+#    #+#             */
/*   Updated: 2020/07/02 12:13:43 by tseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char ch)
{
	write(1, &ch, 1);
}

void	print_numbers(int i, int j)
{
	ft_putchar(i / 10 + '0');
	ft_putchar(i % 10 + '0');
	ft_putchar(' ');
	ft_putchar(j / 10 + '0');
	ft_putchar(j % 10 + '0');
}

void	print_comma(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_comb2(void)
{
	int i;
	int j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			print_numbers(i, j);
			if (!(i == 98 && j == 99))
				print_comma();
			j++;
		}
		i++;
	}
}

int		main(void)
{
	ft_print_comb2();
	return (0);
}
