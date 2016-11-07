/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdeclerc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 14:46:32 by fdeclerc          #+#    #+#             */
/*   Updated: 2016/11/06 13:29:42 by fdeclerc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *s1)
{
	char	*dup;
	char	*ptd;
	int		len;

	len = ft_strlen(s1);
	dup = (char*)malloc(sizeof(char) * (len + 1));
	ptd = dup;
	if (dup != NULL)
	{
		while (*s1)
			*ptd++ = *s1++;
		*ptd = '\0';
		return (dup);
	}
	else
		return (NULL);
}
