/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgiurgev <dgiurgev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 17:34:37 by dgiurgev          #+#    #+#             */
/*   Updated: 2024/02/23 21:22:10 by dgiurgev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

// int	ft_atoi(const char *str)
// {
// 	int	i;
// 	int	result;
// 	int	sign;

// 	i = 0;
// 	result = 0;
// 	sign = 1;
// 	while (str[i] == ' ' || str[i] == '\t'
// 		|| str[i] == '\n' || str[i] == '\r'
// 		|| str[i] == '\v' || str[i] == '\f')
// 		i++;
// 	if (str[i] == '-' || str[i] == '+')
// 	{
// 		if (str[i] == '-')
// 			sign = -1;
// 		i++;
// 	}
// 	while (str[i] != '\0')
// 	{
// 		if (!(str[i] >= '0' && str[i] <= '9'))
// 			return (result * sign);
// 		result = result * 10 + str[i] - '0';
// 		i++;
// 	}
// 	return (result * sign);
// }

long	ft_atol(const char *str)
{
	int	i;
	int	result;
	int	sign;

	i = 0;
	result = 0;
	sign = 1;
	while (str[i] == ' ' || str[i] == '\t'
		|| str[i] == '\n' || str[i] == '\r'
		|| str[i] == '\v' || str[i] == '\f')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (result * sign);
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result * sign);
}
