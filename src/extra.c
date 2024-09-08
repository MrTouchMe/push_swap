#include "../include/push_swap.h"

void add_operation(t_push_swap *ps, const char *op) {
    if (ps->op_count < MAX_OPERATIONS) {
        ps->operations[ps->op_count] = strdup(op);
        ps->op_count++;
    }
}

void print_operations(t_push_swap *ps) {
    for (int i = 0; i < ps->op_count; i++) {
        printf("%s\n", ps->operations[i]);
        free(ps->operations[i]);
    }
    free(ps->operations);
}

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

void normalize(t_push_swap *ps) {
    int size = ps->a->top + 1;
    int *temp = (int *)malloc(size * sizeof(int));
    int *sorted = (int *)malloc(size * sizeof(int));
    for (int i = 0; i < size; i++) {
        temp[i] = ps->a->arr[i];
    }
    for (int i = 0; i < size; i++) {
        sorted[i] = temp[i];
    }
    qsort(sorted, size, sizeof(int), compare);
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (temp[i] == sorted[j]) {
                ps->normalized_arr[i] = j + 1;
                break;
            }
        }
    }
    free(temp);
    free(sorted);
}

void sort_small_arrays(t_push_swap *ps) {
    int *a = ps->a->arr;
    int size = ps->a->top + 1;
    if (size == 2) {
        if (a[0] > a[1]) {
            sa(ps->a);
            add_operation(ps, "sa");
        }
    } else if (size == 3) {
        if (a[0] > a[1] && a[1] < a[2] && a[0] < a[2]) {
            sa(ps->a);
            add_operation(ps, "sa");
        } else if (a[0] > a[1] && a[1] > a[2]) {
            sa(ps->a);
            rra(ps->a);
            add_operation(ps, "sa");
            add_operation(ps, "rra");
        } else if (a[0] > a[1] && a[1] < a[2] && a[0] > a[2]) {
            ra(ps->a);
            add_operation(ps, "ra");
        } else if (a[0] < a[1] && a[1] > a[2] && a[0] < a[2]) {
            sa(ps->a);
            ra(ps->a);
            add_operation(ps, "sa");
            add_operation(ps, "ra");
        } else if (a[0] < a[1] && a[1] > a[2] && a[0] > a[2]) {
            rra(ps->a);
            add_operation(ps, "rra");
        }
    } else {
        for (int i = 1; i < size; i++) {
            int key = a[i];
            int j = i - 1;
            while (j >= 0 && a[j] > key) {
                sa(ps->a);
                add_operation(ps, "sa");
                ra(ps->a);
                add_operation(ps, "ra");
                j--;
            }
            ra(ps->a);
            add_operation(ps, "ra");
        }
        for (int i = 0; i < size - 1; i++) {
            rra(ps->a);
            add_operation(ps, "rra");
        }
    }
}

int partition(t_stack *a, t_stack *b, int low, int high) {
    int pivot = a->arr[high];
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (a->arr[j] < pivot) {
            i++;
            pb(a, b);
            printf("pb\n");
        }
    }
    pb(a, b);
    printf("pb\n");
    for (int k = 0; k <= i; k++) {
        pa(a, b);
        printf("pa\n");
    }
    return i + 1;
}

void quicksort(t_stack *a, t_stack *b, int low, int high) {
    if (low < high) {
        int pivot = partition(a, b, low, high);
        quicksort(a, b, low, pivot - 1);
        quicksort(a, b, pivot + 1, high);
    }
}

void sort_large_arrays(t_push_swap *ps) {
    quicksort(ps->a, ps->b, 0, ps->a->top);
}

void sort(t_push_swap *ps) {
    if (ps->a->top < 36) {
        sort_small_arrays(ps);
    } else {
        sort_large_arrays(ps);
    }
}

void initialize_and_parse_input(int argc, char **argv, t_stack **a, t_stack **b) {
    if (argc < 2) {
        return;
    }
    for (int i = 1; i < argc; i++) {
        if (!is_valid_input(argv[i])) {
            handle_error();
        }
    }
    *a = init_stack(argc - 1);
    *b = init_stack(argc - 1);
    for (int i = 1; i < argc; i++) {
        (*a)->arr[++(*a)->top] = atoi(argv[i]);
    }
    if (has_duplicates((*a)->arr, (*a)->top + 1)) {
        handle_error();
    }
}
