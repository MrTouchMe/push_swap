/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgiurgev <dgiurgev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:24:13 by dgiurgev          #+#    #+#             */
/*   Updated: 2024/09/05 21:01:23 by dgiurgev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void pa(t_stack *a, t_stack *b) {
    if (b->top >= 0) {
        a->arr[++a->top] = b->arr[b->top--];
    }
}

void pb(t_stack *a, t_stack *b) {
    if (a->top >= 0) {
        b->arr[++b->top] = a->arr[a->top--];
    }
}
// // (push a)
// // Take the first element at the top of b and put it at the top of a.
// // Do nothing if b is empty.
// void	pa(t_stack_node *a[], t_stack_node *b[])
// {
// 	t_stack_node	*tmp;

// 	if (*b)
// 	{
// 		tmp = *b;
// 		*b = (*b)->next;
// 		tmp->next = *a;
// 		*a= tmp;
// 	}
// }

// // (push b)
// // Take the first element at the top of a and put it at the top of b.
// // Do nothing if a is empty.
// void	pb(t_stack_node *a[], t_stack_node *b[])
// {
// 	t_stack_node	*tmp;

// 	if (*a)
// 	{
// 		tmp = *a;
// 		*a = (*a)->next;
// 		tmp->next = *b;
// 		*b = tmp;
// 	}
// }
