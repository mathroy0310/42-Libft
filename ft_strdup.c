/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 16:11:37 by maroy             #+#    #+#             */
/*   Updated: 2022/10/20 16:44:46 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*b;

	if (!s1)
		return (NULL);
	len = ft_strlen(s1);
	b = malloc(len);
	if (!buf)
		return (NULL);
	ft_memcpy(buf, str, len);
	return (buf);
}
