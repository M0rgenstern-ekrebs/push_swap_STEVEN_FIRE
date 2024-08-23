NAME = push_swap
VERBOSE = -D VERBOSE=1 -D WARNING=0
AR = srcs/libft/libft.a

CC = cc
CFLAGS = -Wextra -Wall -g3 -Werror

OBJS = $(SRCS:.c=.o)
SRCS = 	srcs/main.c		\
		srcs/ft_error.c	\
		\
		\
		srcs/parsing/ft_check_is_int.c		\
		srcs/parsing/ft_ini_stk_from_argv.c	\
		srcs/parsing/ft_check_no_doubles.c	\
		srcs/parsing/ft_check_parsing.c		\
		\
		\
		srcs/solver/ft_sort_three.c					\
		srcs/solver/ft_naive_sort.c					\
		srcs/solver/ft_sort_small.c					\
		\
		srcs/solver/sort_operations/ft_init_nodes_b.c	\
		srcs/solver/sort_operations/ft_inti_nodes_a.c	\
		srcs/solver/sort_operations/ft_move_a_to_b.c	\
		srcs/solver/sort_operations/ft_move_b_to_a.c	\
		srcs/solver/sort_operations/ft_prep_push_a.c	\
		srcs/solver/sort_operations/ft_prep_push_b.c	\
		srcs/solver/sort_operations/ft_get_cheapest.c	\
		\
		\
		srcs/solver/utils/ft_stack_is_sorted_strict_ascending.c			\
		srcs/solver/utils/ft_push_the_firsts.c		\
		srcs/solver/utils/ft_put_min_on_top.c		\
		srcs/solver/utils/ft_set_current_index.c	\
		\
		\
		srcs/stack/lst_operations/ft_lst_addback.c	\
		srcs/stack/lst_operations/ft_lst_last.c		\
		srcs/stack/lst_operations/ft_lst_free.c		\
		srcs/stack/lst_operations/ft_lst_new.c		\
		\
		srcs/stack/stk_operations/ft_free_stack.c					\
		srcs/stack/stk_operations/ft_get_node_i.c					\
		srcs/stack/stk_operations/ft_get_stack_last_prev.c			\
		srcs/stack/stk_operations/ft_get_stack_last.c				\
		srcs/stack/stk_operations/ft_stack_ind_max.c				\
		srcs/stack/stk_operations/ft_stack_ind_min.c				\
		srcs/stack/stk_operations/ft_stack_len.c					\
		srcs/stack/stk_operations/ft_stack_median.c					\
		srcs/stack/stk_operations/ft_is_above_median.c				\
		srcs/stack/stk_operations/ft_node_min.c				\
		srcs/stack/stk_operations/ft_node_max.c				\
		srcs/stack/stk_operations/ft_get_node_with_value.c			\
		\
		srcs/stack/subject_operations/ft_push.c				\
		srcs/stack/subject_operations/ft_swap.c				\
		srcs/stack/subject_operations/ft_rotate.c			\
		srcs/stack/subject_operations/ft_rev_rotate.c		\
		\
		\
		srcs/print/ft_print_stack.c					\
		srcs/print/ft_print_both_stacks.c			\
		srcs/print/ft_print_stack_datas.c			\
		srcs/print/ft_print_stacks_bodies.c			\
		

all: $(NAME)

$(AR) :
	make all -C ./srcs/libft

$(NAME): $(OBJS) $(AR)
	$(CC) $(OBJS) $(CFLAGS) -o $(NAME) $(AR)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@ $(VERBOSE)

INT_MAX = +2147483647
INT_MIN = -2147483648
INPUTS = 1 -8000 56 $(INT_MAX) 4 +67 -66 54242 +0 -9 $(INT_MIN)
test: $(OBJS) $(AR) project_re
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME) $(AR)
	clear
	./$(NAME) $(INPUTS) || echo "$$?"

clean:
	make clean -C ./srcs/libft
	@rm -f $(OBJS)

fclean: clean
	make fclean -C ./srcs/libft
	@rm -f $(NAME)

re: fclean all

project_re:
	@rm -f $(OBJS)
	@rm -f $(NAME)
	make all

.PHONY: all clean fclean re project_re test