/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:41:20 by maroy             #+#    #+#             */
/*   Updated: 2022/10/24 13:12:08 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	LIBFT_H
# define LIBFT_H

#include<stdio.h>
#include<stdlib.h>

	typedef struct s_list
	{
	void *content;
	struct s_list *next;
	} t_list;
	
	int		ft_atoi(const char *str);
	void	ft_bzero(void *s, size_t n);
	void	*ft_calloc(size_t count, size_t size);
	int		ft_isalnum(int c);
	int		ft_isalpha(int c);
	int		ft_isascii(int c);
	int		ft_isdigit(int c);
	int		ft_isprint(int c);
	void	*ft_memchr(const void *s, int c, size_t n);
	int		ft_memcmp(const void *s1, const void *s2, size_t n);
	void	*ft_memcpy(void *dst, const void *src, size_t len);
	void	*ft_memmove(void *dst, const void *src, size_t len);
	void	*ft_memset(void *b, int c, size_t len);
	char	*ft_strchr(char *s, int c);
	char	*ft_strdup(const char *s1);
	size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize);
	size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize);
	int		ft_strlen(char *s);
	int		ft_strncmp(const char *s1, const char *s2, size_t n);
	char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
	char	*ft_strrchr(const char *s, int c);
	int		ft_tolower(int c);
	int		ft_toupper(int c);

#endif