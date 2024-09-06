/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgiurgev <dgiurgev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:23:19 by dgiurgev          #+#    #+#             */
/*   Updated: 2024/09/05 21:03:01 by dgiurgev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"


void rra(t_stack *a) {
    if (a->top > 0) {
        int temp = a->arr[0];
        for (int i = 0; i < a->top; i++) {
            a->arr[i] = a->arr[i + 1];
        }
        a->arr[a->top] = temp;
    }
}

void rrb(t_stack *b) {
    if (b->top > 0) {
        int temp = b->arr[0];
        for (int i = 0; i < b->top; i++) {
            b->arr[i] = b->arr[i + 1];
        }
        b->arr[b->top] = temp;
    }
}

void rrr(t_stack *a, t_stack *b) {
    rra(a);
    rrb(b);
}
// // (reverse rotate a)
// // Shift down all elements of stack a by 1.
// // The last element becomes the first one.
// void	rra(t_stack_node *a[])
// {
// 	t_stack_node *previous = NULL;
// 	t_stack_node *last = *a;

// 	if (*a && (*a)->next)
// 	{
// 		while (last->next)
// 		{
// 			previous = last;
// 			last = last->next;
// 		}
// 		previous->next = NULL;
// 		last->next = *a;
// 		*a = last;
// 	}
// }

// //  (reverse rotate b)
// // Shift down all elements of stack b by 1.
// // The last element becomes the first one.
// void	rrb(t_stack_node *b[])
// {

// 	t_stack_node *previous = NULL;
// 	t_stack_node *last = *b;

// 	if (*b && (*b)->next)
// 	{
// 		while (last->next)
// 		{
// 			previous = last;
// 			last = last->next;
// 		}
// 		previous->next = NULL;
// 		last->next = *b;
// 		*b = last;
// 	}
// }

// // rra and rrb at the same time.
// void	rrr(t_stack_node *a[], t_stack_node *b[])
// {
// 	rra(a);
// 	rrb(b);
// }
