/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 18:03:26 by obouizi           #+#    #+#             */
/*   Updated: 2024/10/29 18:46:21 by obouizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putnbr_fd(int n)
{
	int count;

	count = 0;
	if (n == -2147483648)
		return (write(1, "-2147483648", 11));
	if (n < 0)
	{
		count += ft_putchar_fd('-');
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10);
	}
	count += ft_putchar_fd((n % 10) + '0');
	return (count);
}
