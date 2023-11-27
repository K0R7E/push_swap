/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akortvel <akortvel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 10:24:22 by akortvel          #+#    #+#             */
/*   Updated: 2023/09/21 10:00:36 by akortvel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

int	ft_putnbr_int(int n)
{
	int		len;
	char	*nbr;

	len = 0;
	nbr = ft_itoa(n);
	len = ft_putstr(nbr);
	free (nbr);
	return (len);
}
