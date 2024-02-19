/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgiurgev <dgiurgev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 17:39:21 by dgiurgev          #+#    #+#             */
/*   Updated: 2024/02/19 19:33:23 by dgiurgev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	stack_init(t_stack_node *a[], char *argv[])
{
	long	nbr;
	int		i;

	i = 0;
	while (argv[i])
	{
		nbr = atol(argv[i]);
		++i;
	}
}
