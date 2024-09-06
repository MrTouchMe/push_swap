/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgiurgev <dgiurgev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 17:39:21 by dgiurgev          #+#    #+#             */
/*   Updated: 2024/09/05 20:59:59 by dgiurgev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	stack_init(t_stack_node **a, char *argv[])
{
	long			nbr;
	int				i;
	t_stack_node	*new_node;
	t_stack_node	*last_node;

	i = 0;
	last_node = NULL;
	while (argv[i])
	{
		nbr = ft_atol(argv[i]);
		new_node = malloc(sizeof(t_stack_node));
		if (!new_node)
			return ;
		new_node->nbr = nbr;
		new_node->next = NULL;
		if (*a == NULL)
			*a = new_node;
		else
			last_node->next = new_node;
		last_node = new_node;
		++i;
	}
}


// void	stack_init(t_stack_node *a[], char *argv[])
// {
// 	long			nbr;
// 	int				i;
// 	t_stack_node	*new_node;

// 	i = 0;
// 	while (argv[i])
// 	{
// 		nbr = ft_atol(argv[i]);
// 		// append_back(*a, nbr);
// 		new_node = malloc(sizeof(t_stack_node));
// 		if (!new_node)
// 			return ;
// 		new_node->nbr = nbr;
// 		new_node->next = *a;
// 		*a = new_node;
// 		++i;
// 	}
// }
