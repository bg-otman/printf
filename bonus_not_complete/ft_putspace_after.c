#include "libftprintf.h"

int ft_count_chars(char c, const char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0' && str[i] == c)
        i++;
    return (i);
}
int ft_nbr_len(int nb)
{
    int len;

    if (nb == 0)
        return (1);
    len = 0;
    if (nb < 0)
    {
        len++;
        nb = -nb;
    }
    while (nb != 0)
    {
        nb /= 10;
        len++;
    }
    return (len);
}
int ft_putspace_after(const char *str, va_list args)
{
    int space_nb;
    int char_len;
    int i;
    int count;

    space_nb = ft_atoi(str);
    char_len = ft_count_chars('-', str);
    i = 0;
    while (i < (ft_nbr_len(space_nb) + char_len))
        i++;
    count = 0;
    if (str[i] != '\0')
        count = check_specifier(str[i], args, str);
    i = 0;
    while (i < space_nb - count)
    {
        ft_putchar(' ');
        i++;
    }
    // printf("*%c*", str[count]);
    printf("*%s*", str);
    return (count + i);
}
