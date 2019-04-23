/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edillenb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 13:22:01 by edillenb          #+#    #+#             */
/*   Updated: 2019/04/12 16:52:00 by edillenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*result;
	unsigned int	i;

	i = 0;
	if (s == 0)
		return (NULL);
	if (!(result = ft_strnew(len)))
		return (NULL);
	while (len > 0)
	{
		result[i++] = s[start++];
		len--;
	}
	return (result);
}
