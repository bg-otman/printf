/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizi <obouizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 17:42:43 by obouizi           #+#    #+#             */
/*   Updated: 2024/11/25 20:53:47 by obouizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_puthex(int nb, char *hex)
{
    int count;
    
    count = 0;
    if (nb >= 16)
        ft_puthex(nb / 16, hex);
    count += ft_putchar_fd(hex[nb % 16]);
    return (count);
}