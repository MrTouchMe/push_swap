/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgiurgev <dgiurgev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 16:16:52 by dgiurgev          #+#    #+#             */
/*   Updated: 2024/02/23 20:44:57 by dgiurgev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stdbool.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack_node
{
	int					nbr;
	int					index;
	int					push_cost;
	bool				above_median;
	bool				cheapest;
	struct s_stack_node	*target_node;
	struct s_stack_node	*next;
	struct s_stack_node	*prev;
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
void					ptoa(t_stack_node *a[], t_stack_node *b[]);
void					ptob(t_stack_node *a[], t_stack_node *b[]);

void print_stack(t_stack_node *a);

#endif
