/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdeclerc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 13:54:57 by fdeclerc          #+#    #+#             */
/*   Updated: 2016/11/09 14:00:00 by fdeclerc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H

# define LIBFT_H

#include <string.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct	s_list
{
	void	*content;
	size_t	content_size;
	struct s_list *next;
}				t_list;


