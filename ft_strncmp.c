/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdeclerc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 12:17:35 by fdeclerc          #+#    #+#             */
/*   Updated: 2016/11/09 15:47:41 by fdeclerc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *str1, const char *str2, size_t n)
{
	int i;

	i = 0;
	while (str1[i] != '\0' && str1[i] == str2[i] && i < (int)n - 1)
		i++;
	if (n)
		return (str1[i] - str2[i]);
	return (0);
}
