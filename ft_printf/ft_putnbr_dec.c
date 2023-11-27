/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_dec.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akortvel <akortvel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 08:58:54 by akortvel          #+#    #+#             */
/*   Updated: 2023/09/21 09:57:33 by akortvel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

int	ft_putnbr_dec(int n)
{
	int		len;
	char	*nbr;

	len = 0;
	nbr = ft_itoa(n);
	len = ft_putstr(nbr);
	free (nbr);
	return (len);
}
