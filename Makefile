NAME = push_swap
AR = srcs/libft/libft.a

CC = cc
CFLAGS = -Wextra -Wall -g3 -Werror

OBJS = $(SRCS:.c=.o)
SRCS = 	srcs/main.c		\
		srcs/ft_error.c	\
		\
		srcs/parsing/ft_check_is_int.c		\
		srcs/parsing/ft_ini_stk_from_argv.c	\
		srcs/parsing/ft_check_no_doubles.c	\
		srcs/parsing/ft_check_parsing.c		\
		\
		srcs/solver/ft_sort_three.c	\
		srcs/solver/ft_sort.c		\
		\
		srcs/stack/lst_operations/ft_lst_addback.c	\
		srcs/stack/lst_operations/ft_lst_last.c		\
		srcs/stack/lst_operations/ft_lst_free.c		\
		srcs/stack/lst_operations/ft_lst_new.c			\
		\
		srcs/stack/stk_operations/ft_free_stack.c					\
		srcs/stack/stk_operations/ft_get_stack_last_prev.c			\
		srcs/stack/stk_operations/ft_get_stack_last.c				\
		srcs/stack/stk_operations/ft_stack_ind_max.c				\
		srcs/stack/stk_operations/ft_stack_ind_min.c				\
		srcs/stack/stk_operations/ft_stack_is_sorted_ascending.c	\
		srcs/stack/stk_operations/ft_stack_length.c					\
		srcs/stack/stk_operations/ft_stack_median.c					\
		srcs/stack/stk_operations/ft_stack_set_costs_analysis.c		\
		srcs/stack/stk_operations/ft_stack_set_target_nodes.c		\
		\
		srcs/stack/subject_operations/ft_push.c				\
		srcs/stack/subject_operations/ft_swap.c				\
		srcs/stack/subject_operations/ft_rotate.c			\
		srcs/stack/subject_operations/ft_rev_rotate.c		\
		

all: $(NAME)

$(AR) :
	make all -C ./srcs/libft

$(NAME): $(OBJS) $(AR)
	clear && $(CC) $(OBJS) $(CFLAGS) -o $(NAME) $(AR)

clean:
	make clean -C ./srcs/libft
	@rm -f $(OBJS)

fclean: clean
	make fclean -C ./srcs/libft
	@rm -f $(NAME)

re: clear fclean all

project_re: clear
	@rm -f $(OBJS)
	@rm -f $(NAME)
	make all

clear :
	clear

.PHONY: all clean fclean clear re