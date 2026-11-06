/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezararsi <ezararsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 12:54:59 by ezararsi          #+#    #+#             */
/*   Updated: 2023/10/02 18:58:32 by ezararsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	size_t	i;
	void	*arr;

	i = n * size;
	arr = (void *) malloc (i);
	if (arr == NULL)
		return (NULL);
	ft_bzero(arr, i);
	return (arr);
}
