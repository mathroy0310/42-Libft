/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 16:36:03 by maroy             #+#    #+#             */
/*   Updated: 2022/10/24 11:46:38 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char const	*dst;
	int			i;

	i = -1;
	if (!s)
		return (NULL);
	dst = malloc(len);
	if (!dst)
		return (NULL);
	while (++i < len)
	{
		dst[i] = s[i + start];
	}
	return (dst);
}
