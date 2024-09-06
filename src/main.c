/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgiurgev <dgiurgev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 16:15:58 by dgiurgev          #+#    #+#             */
/*   Updated: 2024/09/05 20:58:37 by dgiurgev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int main(int argc, char **argv) {
    t_stack *a, *b;
    initialize_and_parse_input(argc, argv, &a, &b);
    t_push_swap ps;
    ps.a = a;
    ps.b = b;
    ps.normalized_arr = (int *)malloc((a->top + 1) * sizeof(int));
    ps.operations = (char **)malloc(MAX_OPERATIONS * sizeof(char *));
    ps.op_count = 0;
    normalize(&ps);
    sort(&ps);
    print_operations(&ps);
    free(ps.normalized_arr);
    free_stack(a);
    free_stack(b);
    return 0;
}
// int	main(int argc, char *argv[])
// {
// 	t_stack_node	*a;
// 	t_stack_node	*b;

// 	a = NULL;
// 	b = NULL;
// 	if (1 == argc)
// 		return (0);
// 	stack_init(&a, argv + 1);
// 	sa(&a);
// 	print_stack(a);
// 	return (0);
// }

// void	print_stack(t_stack_node *a)
// {
// 	t_stack_node	*current;

// 	current = a;
// 	while (current != NULL)
// 	{
// 	printf("%d ", current->nbr);
// 	current = current->next;
// 	}
// 	printf("\n");
// }

