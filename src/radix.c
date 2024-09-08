// #include "../include/push_swap.h"


// void split_negative_positive(t_stack_node **a, t_stack_node **b, int size) {
//     for (int i = 0; i < size; i++) {
//         if ((*a)->nbr < 0) {
//             pb(a, b);  // Push negative numbers to stack b
//         } else {
//             ra(a);     // Rotate stack a to keep positive numbers in order
//         }
//     }
// }


// void radix_sort_positive(t_stack_node **a, t_stack_node **b, int size) {
//     int max_bits = get_max_bits(*a);  // Calculate the number of bits needed
//     int i, j;

//     for (i = 0; i < max_bits; i++) {
//         for (j = 0; j < size; j++) {
//             if ((((*a)->nbr >> i) & 1) == 1) {
//                 ra(a);  // Rotate if the ith bit is 1
//             } else {
//                 pb(a, b);  // Push to stack b if the ith bit is 0
//             }
//         }
//         while (*b) {
//             pa(a, b);  // Move everything back from stack b to stack a
//         }
//     }
// }


// void radix_sort_negative(t_stack_node **b, t_stack_node **a, int size) {
//     int max_bits = get_max_bits(*b);  // Calculate the number of bits needed
//     int i, j;

//     for (i = 0; i < max_bits; i++) {
//         for (j = 0; j < size; j++) {
//             if (((abs((*b)->nbr) >> i) & 1) == 1) {
//                 rb(b);  // Rotate if the ith bit of the absolute value is 1
//             } else {
//                 pa(a, b);  // Push to stack a if the ith bit of the absolute value is 0
//             }
//         }
//         while (*a) {
//             pb(b, a);  // Move everything back to stack b
//         }
//     }
// }


// void combine_stacks(t_stack_node **a, t_stack_node **b) {
//     while (*b) {
//         pa(a, b);  // Push all negative numbers from stack b back to stack a
//     }
// }


// void radix_sort(t_stack_node **a, t_stack_node **b, int size) {
//     // Step 1: Push negative numbers to stack b
//     split_negative_positive(a, b, size);

//     // Step 2: Sort positive numbers in stack a
//     int positive_size = stack_size(*a);
//     radix_sort_positive(a, b, positive_size);

//     // Step 3: Sort negative numbers in stack b (by absolute values)
//     int negative_size = stack_size(*b);
//     radix_sort_negative(b, a, negative_size);

//     // Step 4: Push sorted negative numbers back to stack a
//     combine_stacks(a, b);
// }


// int get_max_bits(t_stack_node *stack) {
//     int max = abs(stack->nbr);
//     t_stack_node *current = stack;

//     while (current) {
//         if (abs(current->nbr) > max)
//             max = abs(current->nbr);
//         current = current->next;
//     }

//     int bits = 0;
//     while ((max >> bits) != 0)
//         bits++;

//     return bits;
// }


// int stack_size(t_stack_node *stack) {
//     int size = 0;
//     while (stack) {
//         size++;
//         stack = stack->next;
//     }
//     return size;
// }


// int main(int argc, char *argv[]) {
//     t_stack_node *a = NULL;
//     t_stack_node *b = NULL;

//     if (argc < 2)
//         return 0;

//     // Initialize stack a
//     stack_init(&a, argv + 1);

//     // Get the size of the stack
//     int size = stack_size(a);

//     // Perform radix sort
//     radix_sort(&a, &b, size);

//     // Print the sorted stack
//     print_stack(a);

//     return 0;
// }


