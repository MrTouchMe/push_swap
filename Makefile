# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dgiurgev <dgiurgev@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/13 16:16:01 by dgiurgev          #+#    #+#              #
#    Updated: 2024/02/17 18:52:12 by dgiurgev         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	push_swap
CFLAGS		=	-Wall -Werror -Wextra
CC			=	cc
SRC			=	src/main.c
BIN			=	bin
OBJS		=	$(SRC:src/%.c=$(BIN)/%.o)
LIBFT		=	lib/libft/libft.a
# PF			=	lib/ft_printf/libftprintf.a
# GNL			=	lib/get_next_line/get_next_line.a

COLOR_RESET	=	\033[0m
COLOR_CYAN	=	\033[36m
COLOR_GREEN	=	\033[32m
COLOR_RED	=	\033[31m

$(LIBFT):
				@cd lib/libft && make

# $(PF):
# 				@cd lib/ft_printf && make

# $(GNL):
# 				@cd lib/get_next_line && make

all:			$(NAME)

$(NAME): 		$(LIBFT) # $(PF) $(GNL) $(OBJS)
				@$(CC) -o $(NAME) $(OBJS) -L./lib/libft -lft
				@echo "$(COLOR_CYAN)SO_LONG Compilation completed: $(NAME)$(COLOR_RESET)"

$(BIN)/%.o:		src/%.c
				@mkdir -p $(BIN)
				@$(CC) $(CFLAGS) -c $< -o $@
				@echo "$(COLOR_GREEN)SO_LONG Compilation completed: $@$(COLOR_RESET)"

all:			$(NAME)

clean:
				@cd lib/libft && make clean
				@cd lib/ft_printf && make clean
				 @cd lib/get_next_line && make clean
				@echo "$(COLOR_RED)Cleanup completed.$(COLOR_RESET)"

fclean:			clean
				@rm -f $(NAME)
				@cd lib/libft && make fclean
				@cd lib/ft_printf && make fclean
				@cd lib/get_next_line && make fclean
				@echo "$(COLOR_RED)Removal completed.$(COLOR_RESET)"

re:				fclean install_mlx all
