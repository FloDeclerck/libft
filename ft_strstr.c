/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdeclerc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 17:56:02 by fdeclerc          #+#    #+#             */
/*   Updated: 2016/11/06 18:33:53 by fdeclerc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *lstr)
{
	char const *strb;
	char const *lstrb;

	lstrb = lstr;
	while (*str != '\0')
	{
		strb = str;
		while (*lstr != '\0' && *str == *lstr)
		{
			++str;
			++lstr;
		}
		if (*lstr == '\0')
			return ((char*)strb);
		str = strb + 1;
		lstr = lstrb;
	}
	return (*lstr == '\0' ? (char*)str : NULL);
}
