/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_hex_up.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akortvel <akortvel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 08:10:48 by akortvel          #+#    #+#             */
/*   Updated: 2023/09/21 09:58:24 by akortvel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

static int	ft_strlen_base_hex_up(unsigned int nbr)
{
	int	i;

	i = 0;
	if (nbr == 0)
		return (1);
	while (nbr != 0)
	{
		i++;
		nbr /= 16;
	}
	return (i);
}

static void	ft_putnbr_base_hex_up_rec(unsigned int nbr, const char type)
{
	if (nbr >= 16)
	{
		ft_putnbr_base_hex_up_rec(nbr / 16, type);
		ft_putnbr_base_hex_up_rec(nbr % 16, type);
	}
	else
	{
		if (nbr <= 9)
			ft_putchar_fd((nbr + '0'), 1);
		else
			ft_putchar_fd((nbr - 10 + 'A'), 1);
	}
}

int	ft_putnbr_base_hex_up(unsigned int nbr, const char type)
{
	if (nbr == 0)
		ft_putchar ('0');
	else
		ft_putnbr_base_hex_up_rec(nbr, type);
	return (ft_strlen_base_hex_up(nbr));
}
