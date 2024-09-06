/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgiurgev <dgiurgev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:21:55 by dgiurgev          #+#    #+#             */
/*   Updated: 2024/09/05 21:00:30 by dgiurgev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void sa(t_stack *a) {
    if (a->top > 0) {
        int temp = a->arr[a->top];
        a->arr[a->top] = a->arr[a->top - 1];
        a->arr[a->top - 1] = temp;
    }
}

void sb(t_stack *b) {
    if (b->top > 0) {
        int temp = b->arr[b->top];
        b->arr[b->top] = b->arr[b->top - 1];
        b->arr[b->top - 1] = temp;
    }
}

void ss(t_stack *a, t_stack *b) {
    sa(a);
    sb(b);
}

// // (swap a)
// // Swap the first 2 elements at the top of stack a
// // Do nothing if there is only one or no elements
// void	sa(t_stack_node *a[])
// {
// 	t_stack_node *first = *a;
// 	t_stack_node *second;

// 	if (*a && (*a)->next)
// 		{
// 			second = (*a)->next;
// 			*a = second;
// 			first->next = second->next;
// 			second->next = first;
// 		}
// }

// // (swap b)
// // Swap the first 2 elements at the top of stack b.
// // Do nothing if there is only one or no elements.
// void	sb(t_stack_node *b[])
// {
// 	t_stack_node *first = *b;
// 	t_stack_node *second;


// 	if (*b && (*b)->next)
// 		{
// 			*b = first->next;
// 			first->next = (*b)->next;
// 			(*b)->next = first;
// 		}

// }

// // sa and sb at the same time.
// void	ss(t_stack_node *a[], t_stack_node *b[])
// {
// 	sa(a);
// 	sb(b);
// }

