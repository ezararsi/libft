/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezararsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 12:54:37 by ezararsi          #+#    #+#             */
/*   Updated: 2022/12/11 12:54:43 by ezararsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The bzero() function places n zero-valued bytes in the area pointed to by
str.*/

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	unsigned char	*c;
	size_t			i;

	c = str;
	i = 0;
	while (i < n)
	{
		*c = '\0';
		i++;
		c++;
	}
}
