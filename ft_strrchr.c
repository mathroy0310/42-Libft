/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:02:28 by maroy             #+#    #+#             */
/*   Updated: 2022/11/10 14:34:03 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int				i;
	unsigned char				*last_occurence;

	last_occurence = NULL;
	i = 0;
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
			last_occurence = (unsigned char *)&s[i];
		i++;
	}
	if (s[i] == (unsigned char)c)
		return ((char *)&s[i]);
	return ((char *)last_occurence);
}
