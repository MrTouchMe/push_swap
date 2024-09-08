

// MAKE file

// # Compiler and flags

// CC = gcc

// CFLAGS = -Wall -Wextra -Werror



// # Source and object files

// SRCS = main.c stack.c operations.c sorting.c error_handling.c

// OBJS = $(SRCS:.c=.o)



// # Executable name

// NAME = push_swap



// # Default target

// all: $(NAME)



// # Build the executable

// $(NAME): $(OBJS)

// 	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)



// # Clean object files

// clean:

// 	rm -f $(OBJS)



// # Clean all generated files

// fclean: clean

// 	rm -f $(NAME)



// # Rebuild the project

// re: fclean all



// # Rule to compile .c files to .o files

// %.o: %.c

// 	$(CC) $(CFLAGS) -c $< -o $@



