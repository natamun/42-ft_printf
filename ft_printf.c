/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmunari <nmunari@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 17:07:09 by nmunari           #+#    #+#             */
/*   Updated: 2025/09/30 19:01:57 by nmunari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	arg_print(const char type, va_list ap)
{
	if (type == 'c')
		return (ft_putchar(va_arg(ap, int)));
	if (type == 's')
		return (ft_putchar(va_arg(ap, int)));
	if (type == 'p')
		return (ft_putchar(va_arg(ap, int)));
	if (type == 'd')
		return (ft_putchar(va_arg(ap, int)));
	if (type == 'i')
		return (ft_putchar(va_arg(ap, int)));
	if (type == 'u')
		return (ft_putchar(va_arg(ap, int)));
	if (type == 'x')
		return (ft_putchar(va_arg(ap, int)));
	if (type == 'X')
		return (ft_putchar(va_arg(ap, int)));
	if (type == '%')
		return (ft_putchar(va_arg(ap, int)));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	int		len;
	int		i;
	va_list	ap;

	i = 0;
	len = 0;
	va_start(ap, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			len += arg_print(str[++i], ap);
			i++;
		}
		else
			len += ft_putchar(str[i++]);
	}
	return (len);
}
