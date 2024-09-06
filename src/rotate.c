/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgiurgev <dgiurgev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:22:27 by dgiurgev          #+#    #+#             */
/*   Updated: 2024/09/05 21:03:58 by dgiurgev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"


void ra(t_stack *a) {
    if (a->top > 0) {
        int temp = a->arr[a->top];
        for (int i = a->top; i > 0; i--) {
            a->arr[i] = a->arr[i - 1];
        }
        a->arr[0] = temp;
    }
}

void rb(t_stack *b) {
    if (b->top > 0) {
        int temp = b->arr[b->top];
        for (int i = b->top; i > 0; i--) {
            b->arr[i] = b->arr[i - 1];
        }
        b->arr[0] = temp;
    }
}

void rr(t_stack *a, t_stack *b) {
    ra(a);
    rb(b);
}

// // (rotate a)
// // Shift up all elements of stack a by 1.
// // The first element becomes the last one.
// void	ra(t_stack_node *a[])
// {
// 	t_stack_node *first;
// 	t_stack_node *last;

// 	if (*a && (*a)->next)
// 	{
// 		first = *a;
// 		*a = (*a)->next;
// 		first->next = NULL;
// 		last = *a;
// 		while (last->next)
// 		{
// 			last = last->next;
// 		}
// 		last->next = first;
// 	}
// }

// // (rotate b)
// // Shift up all elements of stack b by 1.
// // The first element becomes the last one.
// void	rb(t_stack_node *b[])
// {
// 	t_stack_node *first;
// 	t_stack_node *last;

// 	if (*b && (*b)->next)
// 	{
// 		first = *b;
// 		*b = (*b)->next;
// 		first->next = NULL;
// 		last = *b; while (last->next)
// 		{
// 			last = last ->next;
// 		}
// 		last->next = first;
// 	}
// }

// // ra and rb at the same time.
// void	rr(t_stack_node *a[], t_stack_node *b[])
// {
// 	ra(a);
// 	rb(b);
// }

