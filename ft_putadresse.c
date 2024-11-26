/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadresse.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizi <obouizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 16:12:06 by obouizi           #+#    #+#             */
/*   Updated: 2024/11/26 10:23:14 by obouizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int     ft_putadresse(long long nb)
{
    int count;
    
    count = 0;
    count += write(1, "0x", 2);
    count += ft_puthex(nb, "0123456789abcdef");
    return (count);
}