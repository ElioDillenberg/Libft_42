/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edillenb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 15:30:58 by edillenb          #+#    #+#             */
/*   Updated: 2019/04/03 16:34:27 by edillenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	int			i;
	int			sign;
	long long	atoi;
	int			result;

	atoi = 0;
	i = 0;
	sign = 1;
	while (str[i] == 32 || (9 <= str[i] && str[i] <= 13))
		i++;
	if (str[i++] == 45)
		sign = -1;
	else if (str[i] == 43)
		i++;
	while (48 <= str[i] && str[i] <= 57)
	{
		atoi = atoi * 10 + (str[i] - 48);
		i++;
		if (atoi < 0)
		{
			if (sign == -1)
				return (0);
			else if (sign == 1)
				return (-1);
		}
	}
	result = atoi;
	return (result * sign);
}
