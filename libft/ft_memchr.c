/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezararsi <ezararsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 13:23:09 by ezararsi          #+#    #+#             */
/*   Updated: 2023/10/01 23:48:55 by ezararsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The memchr() function searches the first count bytes of buf for the first
occurrence of c converted to an unsigned character. The search continues
until it finds c or examines count bytes. Return Value. The memchr() function
returns a pointer to the location of c in buf.*/

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	const char	*s;
	size_t		i;

	s = str;
	i = 0;
	while (i < n)
	{
		if (s[i] == (char)c)
			return ((void *)&s[i]);
		i++;
	}
	return (NULL);
}
