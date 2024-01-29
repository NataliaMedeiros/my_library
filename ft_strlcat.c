/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmedeiro <nmedeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 18:01:25 by nmedeiro          #+#    #+#             */
/*   Updated: 2023/10/27 18:28:54 by nmedeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_library.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	n;
	size_t	len_total;
	size_t	src_len;

	dst_len = ft_strlen(dst);
	n = 0;
	src_len = ft_strlen(src);
	len_total = dst_len + src_len;
	if (size > dst_len + 1)
	{
		while ((src[n] != '\0') && ((dst_len + n + 1) < size))
		{
			dst[dst_len + n] = src[n];
			n++;
		}
	}
	dst[dst_len + n] = '\0';
	if (size < dst_len)
		return (src_len + size);
	return (len_total);
}
