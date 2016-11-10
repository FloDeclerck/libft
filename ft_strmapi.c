/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdeclerc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 13:26:12 by fdeclerc          #+#    #+#             */
/*   Updated: 2016/11/10 13:55:45 by fdeclerc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;
	char			*ptr;

	if (s)
	{
		str = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1));
		if (!str)
			return (NULL);
		else
		{
			ptr = str;
			i = 0;
			while (*s)
				*ptr++ = f(*s++, i++);
			*ptr = '\0';
			return (str);
		}
	}
	return (NULL);
}
