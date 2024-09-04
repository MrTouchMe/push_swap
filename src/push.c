/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgiurgev <dgiurgev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:24:13 by dgiurgev          #+#    #+#             */
/*   Updated: 2024/02/23 21:20:38 by dgiurgev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

// (push a)
// Take the first element at the top of b and put it at the top of a.
// Do nothing if b is empty.
void	ptoa(t_stack_node *a[], t_stack_node *b[])
{
	t_stack_node	*tmp;

	if (*b)
	{
		tmp = *b;
		*b = (*b)->next;
		tmp->next = *a;
		*a= tmp;
	}
}

// (push b)
// Take the first element at the top of a and put it at the top of b.
// Do nothing if a is empty.
void	ptob(t_stack_node *a[], t_stack_node *b[])
{
	t_stack_node	*tmp;

	if (*a)
	{
		tmp = *a;
		*a = (*a)->next;
		tmp->next = *b;
		*b = tmp;
	}
}
