/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbessmer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 11:31:28 by dbessmer          #+#    #+#             */
/*   Updated: 2016/12/23 08:42:47 by dbessmer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char *str;
	size_t i;

	i = 0;
	str = (char*)malloc(size);
	if (!str)
		return (NULL);
	while (i < size)
		str[i++] = 0;
	return (str);
}
