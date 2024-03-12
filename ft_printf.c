/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmoham <marmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 15:11:05 by marmoham          #+#    #+#             */
/*   Updated: 2023/08/07 16:56:34 by marmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	check_specifier(va_list args, char c, int *counter)
{
	if (c == 'd' || c == 'i')
		ft_putnbr_pf(va_arg(args, int), counter);
	else if (c == 'u')
		ft_putunbr_pf(va_arg(args, unsigned int), counter);
	else if (c == 'c')
		ft_putchar_pf(va_arg(args, int), counter);
	else if (c == 's')
		ft_putstr_pf(va_arg(args, char *), counter);
	else if (c == 'x' || c == 'X')
		ft_puthex_pf(va_arg(args, unsigned int), c, counter);
	else if (c == 'p')
		ft_putptr_pf(va_arg(args, void *), counter);
	else if (c == '%')
		ft_putchar_pf('%', counter);
	else 
	{
		ft_putchar_pf('%', counter);
		ft_putchar_pf(c, counter);
	}
}

int	ft_printf(const char *str, ...)
{
	int				counter;
	va_list			args;

	counter = 0;
	va_start(args, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			check_specifier(args, *str, &counter);
		}
		else
			ft_putchar_pf(*str, &counter);
		str++;
	}
	va_end(args); 
	return (counter);
}

/*#include <stdio.h>
int main()
{
	int first = printf("hello everyone\n");
	int second = ft_printf("hello everyone\n");
	printf("%d\n",first);
	printf("%d\n", second);
}*/
