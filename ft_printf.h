/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmoham <marmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 14:30:18 by marmoham          #+#    #+#             */
/*   Updated: 2023/08/07 17:11:02 by marmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdint.h>
# include <stdlib.h>

void	ft_putchar_pf(char c, int *i);
void	ft_puthex_pf(uintptr_t n, char case_type, int *counter);
void	ft_putnbr_pf(int n, int *counter);
void	ft_putptr_pf(void *ptr, int *counter);
void	ft_putstr_pf(char *str, int *i);
void	ft_putunbr_pf(unsigned int n, int *counter);
void	check_format_specifier(va_list args, char c, int *counter);
int		ft_printf(const char *str, ...);
#endif 