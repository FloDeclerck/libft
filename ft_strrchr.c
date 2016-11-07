/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdeclerc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 16:58:14 by fdeclerc          #+#    #+#             */
/*   Updated: 2016/11/06 17:50:28 by fdeclerc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *str, int c)
{
	char	*comp;
	int		real;

	real = 0;
	while (*str != '\0')
	{
		if (c == *str)
		{
			comp = (char*)str;
			real = 1;
		}
		str++;
	}
	if (real > 0)
		return (comp);
	if (c == '\0')
		return ((char*)str);
	else
		return (NULL);
}
