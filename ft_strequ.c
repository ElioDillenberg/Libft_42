/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edillenb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 12:54:29 by edillenb          #+#    #+#             */
/*   Updated: 2019/04/11 19:46:04 by edillenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strequ(char const *s1, char const *s2)
{
	unsigned int	i;

	i = 0;
	if (s1 == 0 || s2 == 0)
		return (0);
	while ((s1[i] == s2[i]) && s1[i] && s2[i])
		i++;
	if (s1[i] - s2[i] == 0)
		return (1);
	return (0);
}