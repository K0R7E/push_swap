/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akortvel <akortvel@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 14:42:03 by akortvel          #+#    #+#             */
/*   Updated: 2023/09/21 08:08:49 by akortvel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include <stdio.h>
# include <stdint.h>
# include <limits.h>

# ifdef __linux__
#  define PTRNULL "(nil)"
# endif

# ifdef __APPLE__
#  define PTRNULL "0x0"
# endif

int		ft_which(va_list args, const char type);
int		ft_printf(const char *str, ...);
int		ft_putstr(char *str);
int		ft_putchar(int c);
int		ft_putnbr_dec(int n);
int		ft_putnbr_int(int n);
int		ft_putnbr_base_hex_low(unsigned int nbr, const char type);
int		ft_putnbr_base_hex_up(unsigned int nbr, const char type);
int		ft_putpercent(void);
int		ft_putptr(unsigned long long ptr);
int		ft_putunsigned(unsigned int nbr);
char	*ft_itoa(int n);

#endif