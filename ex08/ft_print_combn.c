/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseo <tseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 12:24:33 by tseo              #+#    #+#             */
/*   Updated: 2020/07/02 14:56:03 by tseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char ch)
{
	write(1, &ch, 1);
}

void	print_num(int num_arr[], int n)
{
	int idx;

	idx = 0;
	while (idx < n)
	{
		ft_putchar(num_arr[idx] + '0');
		idx++;
	}
	if (!(num_arr[0] == 10 - n && num_arr[n - 1] == 9))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	make_combn(int num_arr[], int n, int m)
{
	int i;

	if (n == m)
		print_num(num_arr, n);
	else
	{
		if (m == 0)
			i = 0;
		else
			i = num_arr[m - 1] + 1;
		while (i <= 9)
		{
			num_arr[m] = i;
			make_combn(num_arr, n, m + 1);
			i++;
		}
	}
}

void	ft_print_combn(int n)
{
	int num_arr[10];

	make_combn(num_arr, n, 0);
}
