/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 18:36:20 by maroy             #+#    #+#             */
/*   Updated: 2022/10/20 14:16:12 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"q

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*cb;
	unsigned char	*cc;

	i = -1;
	cb = (unsigned char *)b;
	cc = (unsigned char *)c;
	while (++i < len)
	{
		cb[i] = cc;
	}
	return (b;
}
