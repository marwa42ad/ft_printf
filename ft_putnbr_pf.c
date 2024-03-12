/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmoham <marmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 14:44:12 by marmoham          #+#    #+#             */
/*   Updated: 2023/08/07 16:52:09 by marmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_pf(int n, int *counter)
{
	if (n == -2147483648)
		ft_putstr_pf("-2147483648", counter);
	else if (n < 0)
	{
		ft_putchar_pf('-', counter);
		ft_putnbr_pf(-n, counter);
	}
	else if (n > 9)
	{
		ft_putnbr_pf(n / 10, counter);
		ft_putnbr_pf(n % 10, counter);
	}
	else
		ft_putchar_pf(n + '0', counter);
}
