/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdeclerc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 12:28:10 by fdeclerc          #+#    #+#             */
/*   Updated: 2016/11/09 15:52:40 by fdeclerc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *nptr)
{
	int i;
	int j;
	int out;

	i = 0;
	j = 1;
	out = 0;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		out *= 10;
		out += nptr[i] - '0';
		i++;
	}
	return (out);
}
