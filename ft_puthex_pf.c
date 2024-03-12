/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmoham <marmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 14:34:02 by marmoham          #+#    #+#             */
/*   Updated: 2023/08/07 17:09:45 by marmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex_pf(uintptr_t n, char case_type, int *counter)
{
	char	*hx;

	hx = "0123456789abcdef";
	if (case_type == 'X')
		hx = "0123456789ABCDEF";
	if (n >= 16)
	{
		ft_puthex_pf(n / 16, case_type, counter);
		ft_puthex_pf(n % 16, case_type, counter);
	}
	else
		ft_putchar_pf(hx[n], counter);
}
