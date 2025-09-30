/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmunari <nmunari@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 17:07:09 by nmunari           #+#    #+#             */
/*   Updated: 2025/09/30 17:44:46 by nmunari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int		len;
	int		i;
	//va_list	ap;

	i = 0;
	len = 0;
	while (str[i])
	{
		len += ft_putchar(str[i]);
		i++;
	}
	return (len);
}
