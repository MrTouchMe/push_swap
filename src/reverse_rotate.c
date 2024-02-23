/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgiurgev <dgiurgev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:23:19 by dgiurgev          #+#    #+#             */
/*   Updated: 2024/02/23 21:22:43 by dgiurgev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

// (reverse rotate a)
// Shift down all elements of stack a by 1.
// The last element becomes the first one.
void	rra(t_stack_node *a[])
{
	return ;
}

//  (reverse rotate b)
// Shift down all elements of stack b by 1.
// The last element becomes the first one.
void	rrb(t_stack_node *b[])
{
	rra(&b);
}

// rra and rrb at the same time.
void	rrr(t_stack_node *a[], t_stack_node *b[])
{
	rra(&a);
	rrb(&b);
}
