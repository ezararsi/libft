/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezararsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 14:18:00 by ezararsi          #+#    #+#             */
/*   Updated: 2022/12/11 14:18:04 by ezararsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The strdup() function shall return a pointer to a new string, which is a 
duplicate of the string pointed to by s. The returned pointer can be passed
to free(). A null pointer is returned if the new string cannot be created.*/

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dest;

	dest = (char *)malloc(ft_strlen((char *)src) + 1);
	if (!dest)
		return (NULL);
	dest = ft_strcpy((char *)src, dest);
	return (dest);
}

 char	*ft_strcpy(char *src, char *dest)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
