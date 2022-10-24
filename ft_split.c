/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 11:26:09 by maroy             #+#    #+#             */
/*   Updated: 2022/10/24 12:32:51 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_realloc(char *ptr, int size)
{
	void	*newptr;
	int		msize;

	msize = ft_strlen(ptr);
	if (size <= msize)
		return (ptr);
	newptr = malloc(size);
	ft_memcpy(newptr, ptr, msize);
	free(ptr);
	return (newptr);
}

char	**ft_split(char const *s, char c)
{
	char	**dst;
	char	*ptr;
	char	*str;
	int		len;
	int		dstlen;

	dstlen = 0;
	str = s1;
	ptr = ft_strstr(s1, c);
	len = ptr - str;
	if (ft_strlen(str) != 0)
	{
		len = ft_strlen(str);
		dstlen++;
		dst = (char **)ft_realloc(dst, sizeof(char *) * dstlen);
	}
	dstlen++;
	dst = (char **)ft_realloc(dst, sizeof(char *) * dstlen);
	tab[dstlen - 1] = NULL;
	return (dst);
}
