/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezararsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 14:24:04 by ezararsi          #+#    #+#             */
/*   Updated: 2022/12/11 14:24:07 by ezararsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The strnstr() function locates the	first occurrence of the	null-termi-
 nated string little in the	string big, where not more than	len characters
 are searched.*/

#include "libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t n)
{
	size_t	i;
	size_t	j;

	if (find[0] == '\0')
		return ((char *)str);
	i = 0;
	if (*str == '\0' || n <= 0)
		return (0);
	while (i < n)
	{
		j = 0;
		while (find[j] == str[i + j])
		{
			if (find[j + 1] == '\0')
				return ((char *)&str[i]);
			j++;
			if (i + j >= n)
				return (0);
		}
		i++;
	}
	return (0);
}
