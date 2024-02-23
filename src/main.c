/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgiurgev <dgiurgev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 16:15:58 by dgiurgev          #+#    #+#             */
/*   Updated: 2024/02/23 21:20:19 by dgiurgev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

// int	main(int argc, char *argv[])
// {
// 	t_stack_node	*a;
// 	t_stack_node	*b;

// 	a = NULL;
// 	b = NULL;
// 	if (argc <= 2)
// 		return (write(2, "Not enough arguments\n", 22), 1);
// 	stack_init(&a, argv + 1);
// 	a = initialize_stack();
// 	print_stack(a);
// 	return (0);
// }

// void	print_stack(t_stack_node *a)
// {
// 	t_stack_node	*current;

// 	current = a;
// 	while (current != NULL)
// 	{
// 		printf("%d ", current->nbr);
// 		current = current->next;
// 	}
// 	printf("\n");
// }

int	main(int argc, char *argv[])
{
	t_stack_node	*a;
	t_stack_node	*b;

	a = NULL;
	b = NULL;
	if (argc <= 2)
		return (write(2, "Not enough arguments\n", 22), 1);
	stack_init(&a, argv + 1);
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
