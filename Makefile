# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dgiurgev <dgiurgev@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/13 16:16:01 by dgiurgev          #+#    #+#              #
#    Updated: 2024/02/25 01:18:11 by dgiurgev         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	push_swap
CFLAGS		=	-g -Wall# -Werror -Wextra
CC			=	cc
SRC			=	$(wildcard src/*.c)
BIN			=	bin
OBJS		=	$(SRC:src/%.c=$(BIN)/%.o)
LIBFT		=	lib/libft/libft.a

COLOR_RESET	=	\033[0m
COLOR_CYAN	=	\033[36m
COLOR_GREEN	=	\033[32m
COLOR_RED	=	\033[31m

$(LIBFT):
				@cd lib/libft && make

all:			$(NAME)

$(NAME): 		$(LIBFT) $(OBJS)
				@$(CC) -o $(NAME) $(OBJS) -L./lib/libft -lft
				@echo "$(COLOR_CYAN)PUSH_SWAP Compilation completed: $(NAME)$(COLOR_RESET)"

$(BIN)/%.o:		src/%.c
				@mkdir -p $(BIN)
				@$(CC) $(CFLAGS) -c $< -o $@
				@echo "$(COLOR_GREEN)PUSH_SWAP Compilation completed: $@$(COLOR_RESET)"

all:			$(NAME)

clean:
				@rm -rf $(BIN)
				@cd lib/libft && make clean
				@echo "$(COLOR_RED)Cleanup completed.$(COLOR_RESET)"

fclean:			clean
				@rm -f $(NAME)
				@cd lib/libft && make fclean
				@echo "$(COLOR_RED)Removal completed.$(COLOR_RESET)"

re:				fclean all

.PHONY : all clean fclean re
