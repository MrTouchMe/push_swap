/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgiurgev <dgiurgev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 17:39:21 by dgiurgev          #+#    #+#             */
/*   Updated: 2024/02/23 21:24:22 by dgiurgev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	stack_init(t_stack_node *a[], char *argv[])
{
	long			nbr;
	int				i;
	t_stack_node	*new_node;

	i = 0;
	while (argv[i])
	{
		nbr = atol(argv[i]);
		new_node = malloc(sizeof(t_stack_node));
		if (!new_node)
			return ;
		new_node->nbr = nbr;
		new_node->next = *a;
		*a = new_node;
		++i;
	}
}
