/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgiurgev <dgiurgev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 16:15:58 by dgiurgev          #+#    #+#             */
/*   Updated: 2024/02/29 22:58:59 by dgiurgev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int argc, char *argv[])
{
	t_stack_node	*a;
	t_stack_node	*b;

	a = NULL;
	b = NULL;
	if (1 == argc)
		return (0);
	stack_init(&a, argv + 1);
	sa(&a);
	print_stack(a);
	return (0);
}

void	print_stack(t_stack_node *a)
{
	t_stack_node	*current;

	current = a;
	while (current != NULL)
	{
	printf("%d ", current->nbr);
	current = current->next;
	}
	printf("\n");
}
