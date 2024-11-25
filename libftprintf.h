/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizi <obouizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 15:14:01 by obouizi           #+#    #+#             */
/*   Updated: 2024/11/25 20:53:53 by obouizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *, ...);
int		check_specifier(char c, va_list args);
int	    ft_putchar_fd(char c);
int	    ft_putnbr_fd(int n);
int	    ft_putstr_fd(char *s);
int     ft_puthex(int nb, char *hex);
size_t	ft_strlen(const char *s);
int		ft_tolower(int c);
int		ft_toupper(int c);

#endif
