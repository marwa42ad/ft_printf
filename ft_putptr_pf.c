/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmoham <marmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 14:46:08 by marmoham          #+#    #+#             */
/*   Updated: 2023/08/07 17:09:03 by marmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putptr_pf(void *ptr, int *counter)
{
	if (ptr == NULL)
		ft_putstr_pf("0x0", counter);
	else
	{
		ft_putstr_pf("0x", counter);
		ft_puthex_pf((uintptr_t)ptr, 'x', counter);
	}
}
