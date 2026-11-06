/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezararsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 14:22:49 by ezararsi          #+#    #+#             */
/*   Updated: 2022/12/11 14:22:53 by ezararsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The strlen() function determines the length of string excluding the ending
null character.*/

#include "libft.h"

int	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
