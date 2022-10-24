/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 12:12:06 by maroy             #+#    #+#             */
/*   Updated: 2022/10/20 16:43:20 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*csrc;
	unsigned char		*cdst;

	csrc = (unsigned char *)src;
	cdst = (unsigned char *)dst;
	i = -1;
	if (!src || !dst)
		return (NULL);
	if (csrc > cdst)
	{
		while (len > ++i)
			cdst[len - i - 1] = csrc[len - i - 1];
	}
	else
	{
		while (len > ++i)
			cdst[i] = csrc[i];
	}
	return (dst);
}
