/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdeclerc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 15:13:46 by fdeclerc          #+#    #+#             */
/*   Updated: 2016/11/06 15:37:28 by fdeclerc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strlcat(char *dst, char *src, int n)
{
	int dstl;
	int srcl;
	int len;

	dstl = ft_strlen(dst);
	srcl = ft_strlen(src);
	if (n < dstl)
		len = n + srcl;
	else
		len = dstl + srcl;
	dst = dst + dstl;
	dstl += 1;
	while (dstl < n && *src != '\0')
	{
		*dst = *src;
		dst++;
		src++;
		dstl++;
	}
	*dst = '\0';
	return (len);
}
