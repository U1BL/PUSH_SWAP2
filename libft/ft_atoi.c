/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mofaisal <mofaisal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 14:57:50 by mofaisal          #+#    #+#             */
/*   Updated: 2023/03/04 23:09:17 by mofaisal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(char c)
{
	if (c == ' ' || c == '\n' || c == '\t' || c == '\v' || c == '\f'
		|| c == '\r')
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	long long	nbr;
	int	sign;
	size_t	i;

	nbr = 0;
	sign = 1;
	i = 0;
	
	while ((str[i] != '\0') && ft_isspace(str[i]) == 1)
		i++;
	if (str[i] == '-')
		sign = -1;
	if ((str[i] == '-') || (str[i] == '+'))
		i++;
	while ((str[i] != '\0') && ('0' <= str[i]) && (str[i] <= '9'))
	{
		nbr = (nbr * 10) + (str[i] - '0');
		if (nbr > INT_MAX && sign == 1)
		{
			(printf("ERROR: int max or min\n"), 0);
			exit(1);
		}
		if (nbr > INT_MAX && sign == -1)
		{
			(printf("ERROR: int max or min\n"), 0);
			exit(1);
		}
		i++;
	}
	return (sign * nbr);
}
