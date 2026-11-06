/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezararsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 13:26:13 by ezararsi          #+#    #+#             */
/*   Updated: 2022/12/11 13:26:17 by ezararsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The memmove() function copies count bytes of src to dest . This function
allows copying between objects that might overlap as if src is first copied
into a temporary array.*/

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char	*s;
	char		*d;
	size_t		i;

	if (!dest && !src)
		return (NULL);
	i = 0;
	d = dest;
	s = src;
	while (i < n)
	{
		if (s < d)
			d[n - 1 - i] = s[n - 1 - i];
		else
			d[i] = s[i];
		i++;
	}
	return (dest);
}
