/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 01:23:46 by maroy             #+#    #+#             */
/*   Updated: 2022/10/24 11:23:59 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int			lens1;
	int			lens2;
	char const	*dst;

	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	if (!s1 || !s2)
		return (NULL);
	dest = malloc(lens1 + lens2 + 1);
	if (!dest)
		return (NULL);
	ft_memmove(dst, s1, lens1);
	ft_memmove(dst + lens1, s2, lens2);
	dst[lens1 + lens2 -1] = '\0';
	return (dst);
}
