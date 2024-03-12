/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_pf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmoham <marmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 14:40:51 by marmoham          #+#    #+#             */
/*   Updated: 2023/08/07 16:55:55 by marmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunbr_pf(unsigned int n, int *counter)
{
	if (n > 9)
	{
		ft_putnbr_pf(n / 10, counter);
		ft_putnbr_pf(n % 10, counter);
	}
	else
		ft_putchar_pf(n + '0', counter);
}
