/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhossan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 16:00:33 by akhossan          #+#    #+#             */
/*   Updated: 2019/10/11 16:00:35 by akhossan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "flags.h"

/*
 **	ft_printf emulates the behaviour of the C standard 
 **	function 'printf', ft_printf is a multi argument
 **	function (aka variadic function).
 ** It basically tries to display a list of variables
 ** type-defined in the string format passed as first parameter
 ** if the string format doesn't specify the appropriate
 ** variable type the behaviour is undefined.
 **	@args:
 **	fmt:
 		The format string specifier
 **	...:
 		undefined number of parameters, depending on the
		format string specification the number of parameter
		must match the number of format specifiers
		given inside the format string fmt.
*/

int		ft_printf(const char *fmt, ...)
{
	va_list	av;
	int		bytes;

	bytes = 0;
	va_start(av, fmt);
	while (*fmt)
	{
		fmt++;
	}
	return (bytes);
}
