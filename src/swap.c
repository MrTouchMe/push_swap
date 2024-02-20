/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgiurgev <dgiurgev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:21:55 by dgiurgev          #+#    #+#             */
/*   Updated: 2024/02/20 18:49:32 by dgiurgev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

// (swap a)
// Swap the first 2 elements at the top of stack a
// Do nothing if there is only one or no elements
void	sa(t_stack_node *a[])
{
	return ;
}

// (swap b)
// Swap the first 2 elements at the top of stack b.
// Do nothing if there is only one or no elements.
void	sb(t_stack_node *b[])
{
	sa(&b);
}

// sa and sb at the same time.
void	ss(t_stack_node *a[], t_stack_node *b[])
{
	sa(&a);
	sb(&b);
}
