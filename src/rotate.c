/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgiurgev <dgiurgev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:22:27 by dgiurgev          #+#    #+#             */
/*   Updated: 2024/02/23 21:20:52 by dgiurgev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

// (rotate a)
// Shift up all elements of stack a by 1.
// The first element becomes the last one.
void	ra(t_stack_node *a[])
{
	t_stack_node *first;
	t_stack_node *last;

	if (*a && (*a)->next)
	{
		first = *a;
		*a = (*a)->next;
		first->next = NULL;
		last = *a;
		while (last->next)
		{
			last = last->next;
		}
		last->next = first;
	}
}

// (rotate b)
// Shift up all elements of stack b by 1.
// The first element becomes the last one.
void	rb(t_stack_node *b[])
{
	t_stack_node *first;
	t_stack_node *last;

	if (*b && (*b)->next)
	{
		first = *b;
		*b = (*b)->next;
		first->next = NULL;
		last = *b; while (last->next)
		{
			last = last ->next;
		}
		last->next = first;
	}
}

// ra and rb at the same time.
void	rr(t_stack_node *a[], t_stack_node *b[])
{
	ra(a);
	rb(b);
}

