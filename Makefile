CC = cc
CFLAGS = -Werror -Wextra -Wall -g3
RM = rm -rf
NAME = push
OBJS = $(SRCS:.c=.o)

SRCS = 	main.c	\
		\
		parsing/ft_ini_stk_from_argv.c	\
		\
		solver/ft_sort_three.c	\
		solver.ft_sort.c		\
		\
		stack/lst_operations/ft_lst_addback.c	\
		stack/lst_operations/ft_lst_last.c		\
		stack/lst_operations/lst_free.c			\
		stack/lst_operations/lst_new.c			\
		\
		stack/stk_operations/ft_stk_stack_last_prev.c		\
		stack/stk_operations/ft_get_stack_last.c			\
		stack/stk_operations/ft_stack_ind_max.c				\
		stack/stk_operations/ft_stack_ind_min.c				\
		stack/stk_operations/ft_stack_is_sorted_ascending.c	\
		stack/stk_operations/ft_stack_length.c				\
		stack/stk_operations/ft_stack_median.c				\
		stack/stk_operations/ft_stack_set_costs_analysis.c	\
		stack/stk_operations/ft_set_target_nodes.c			\
		\
		stack/subject_operations/ft_push.c				\
		stack/subject_operations/ft_swap.c				\
		stack/subject_operations/ft_rotate.c			\
		stack/subject_operations/ft_reverse_rotate.c	\
		\
		ft_error.c	\
		

all: $(NAME)

$(NAME): $(OBJS)
	$(MAKE) -C ./libft
	cp libft/libft.a $(NAME)
	ar rc $(NAME) $(OBJS)
	cc -o push_swap $(NAME) 

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@ 

clean:
	$(MAKE) clean -C ./libft
	$(RM) $(OBJS)

fclean: clean
	$(MAKE) fclean -C ./libft
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re