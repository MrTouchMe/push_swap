/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgiurgev <dgiurgev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 17:34:37 by dgiurgev          #+#    #+#             */
/*   Updated: 2024/09/05 20:59:18 by dgiurgev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void handle_error() {
    fprintf(stderr, "Error\n");
    exit(EXIT_FAILURE);
}

int is_valid_input(char *str) {
    int i = 0;
    if (str[i] == '-' || str[i] == '+') i++;
    for (; str[i]; i++) {
        if (!isdigit(str[i])) return 0;
    }
    return 1;
}

int has_duplicates(int *arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) return 1;
        }
    }
    return 0;
}

void *safe_malloc(size_t size) {
    void *ptr = malloc(size);
    if (!ptr) {
        handle_error();
    }
    return ptr;
}

t_stack *init_stack(int size) {
    t_stack *stack = (t_stack *)safe_malloc(sizeof(t_stack));
    stack->arr = (int *)safe_malloc(size * sizeof(int));
    stack->top = -1;
    stack->size = size;
    return stack;
}

void free_stack(t_stack *stack) {
    free(stack->arr);
    free(stack);
}

// // int	ft_atoi(const char *str)
// // {
// // 	int	i;
// // 	int	result;
// // 	int	sign;

// // 	i = 0;
// // 	result = 0;
// // 	sign = 1;
// // 	while (str[i] == ' ' || str[i] == '\t'
// // 		|| str[i] == '\n' || str[i] == '\r'
// // 		|| str[i] == '\v' || str[i] == '\f')
// // 		i++;
// // 	if (str[i] == '-' || str[i] == '+')
// // 	{
// // 		if (str[i] == '-')
// // 			sign = -1;
// // 		i++;
// // 	}
// // 	while (str[i] != '\0')
// // 	{
// // 		if (!(str[i] >= '0' && str[i] <= '9'))
// // 			return (result * sign);
// // 		result = result * 10 + str[i] - '0';
// // 		i++;
// // 	}
// // 	return (result * sign);
// // }

// long	ft_atol(const char *str)
// {
// 	int	i;
// 	int	result;
// 	int	sign;

// 	i = 0;
// 	result = 0;
// 	sign = 1;
// 	while (str[i] == ' ' || str[i] == '\t'
// 		|| str[i] == '\n' || str[i] == '\r'
// 		|| str[i] == '\v' || str[i] == '\f')
// 		i++;
// 	if (str[i] == '-' || str[i] == '+')
// 	{
// 		if (str[i] == '-')
// 			sign = -1;
// 		i++;
// 	}
// 	while (str[i] != '\0')
// 	{
// 		if (!(str[i] >= '0' && str[i] <= '9'))
// 			return (result * sign);
// 		result = result * 10 + str[i] - '0';
// 		i++;
// 	}
// 	return (result * sign);
// }
