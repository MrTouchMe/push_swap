/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgiurgev <dgiurgev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:21:55 by dgiurgev          #+#    #+#             */
/*   Updated: 2024/02/23 21:20:55 by dgiurgev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

// (swap a)
// Swap the first 2 elements at the top of stack a
// Do nothing if there is only one or no elements
void	sa(t_stack_node *a[])
{
	t_stack_node *first = *a;
	t_stack_node *second;

	if (*a && (*a)->next)
		{
			second = (*a)->next;
			*a = second;
			first->next = second->next;
			second->next = first;
		}
}

// (swap b)
// Swap the first 2 elements at the top of stack b.
// Do nothing if there is only one or no elements.
void	sb(t_stack_node *b[])
{
	t_stack_node *first = *b;
	t_stack_node *second;


	if (*b && (*b)->next)
		{
			*b = first->next;
			first->next = (*b)->next;
			(*b)->next = first;
		}

}

// sa and sb at the same time.
void	ss(t_stack_node *a[], t_stack_node *b[])
{
	sa(&a);
	sb(&b);
}
