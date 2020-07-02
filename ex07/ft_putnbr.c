/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseo <tseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 12:09:47 by tseo              #+#    #+#             */
/*   Updated: 2020/07/02 12:26:54 by tseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char ch)
{
	write(1, &ch, 1);
}

void	print_num(int n)
{
	if (n >= 10)
		print_num(n / 10);
	ft_putchar((n % 10) + '0');
}

void	ft_putnbr(int nb)
{
	if (nb >= 0)
		print_num(nb);
	else
	{
		ft_putchar('-');
		print_num(-nb);
	}
}

int		main(void)
{
	ft_putnbr(123);
	ft_putnbr(-123);
}
