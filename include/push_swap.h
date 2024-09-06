/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgiurgev <dgiurgev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 16:16:52 by dgiurgev          #+#    #+#             */
/*   Updated: 2024/09/05 20:52:05 by dgiurgev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stdbool.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

#include <ctype.h>

#define MAX_OPERATIONS 10000

typedef struct s_stack {
    int *arr;
    int top;
    int size;
} t_stack;

typedef struct s_push_swap {
    t_stack *a;
    t_stack *b;
    int *normalized_arr;
    char **operations;
    int op_count;
} t_push_swap;

typedef struct s_stack_node
{
	int					nbr;
	int					index;
	int					push_cost;
	bool				above_median;
	bool				cheapest;
	struct s_stack_node	*target_node;
	struct s_stack_node	*next;
	// struct s_stack_node	*prev;
}						t_stack_node;

void					stack_init(t_stack_node *a[], char *argv[]);
long					ft_atol(const char *str);
void					sa(t_stack_node *a[]);
void					sb(t_stack_node *b[]);
void					ss(t_stack_node *a[], t_stack_node *b[]);
void					ra(t_stack_node *a[]);
void					rb(t_stack_node *b[]);
void					rr(t_stack_node *a[], t_stack_node *b[]);
void					rra(t_stack_node *a[]);
void					rrb(t_stack_node *b[]);
void					rrr(t_stack_node *a[], t_stack_node *b[]);
void					pa(t_stack_node *a[], t_stack_node *b[]);
void					pb(t_stack_node *a[], t_stack_node *b[]);
void					print_stack(t_stack_node *a);
int					stack_size(t_stack_node *stack);
int					get_max_bits(t_stack_node *stack);

#endif
