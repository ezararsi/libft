/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezararsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 14:22:25 by ezararsi          #+#    #+#             */
/*   Updated: 2022/12/11 14:22:29 by ezararsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The strlcpy() function returns the total length of the string that would
have been copied if there was unlimited space.*/

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (ft_strlen((char *)src));
	if (!dest || !src)
		return (0);
	while (src[i] && i < n - 1)
	{
		dest[i] = src[i];
		i++;
	}
	if (dest[i])
		dest[i] = '\0';
	i = 0;
	while (*src)
	{
		i++;
		src++;
	}
	return (i);
}
