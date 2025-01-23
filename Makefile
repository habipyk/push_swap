NAME	=	push_swap

NAME_BONUS = checker

SRCS	=	./srcs/push_swap.c 			\
			./srcs/push_swap_utils.c 	\
			./srcs/push_swap_utils2.c 	\
			./srcs/push_swap_utils3.c 	\
			./srcs/main.c 				\
			./srcs/allocate.c 			\
			./srcs/get_num.c 			\
			./srcs/sort_one.c 			\
			./srcs/sort_two.c 			\
			./srcs/sort_three.c 		\
			./srcs/sort_four.c 			\
			./srcs/sort_five.c 			\
			./srcs/sort_six.c 			\
			./srcs/control.c

SRCBS	=	./bonus/checker.c 		\
			./bonus/checker_utils.c 	\
			./bonus/checker_utils2.c 	\
			./bonus/checker_utils3.c 	\
			./bonus/main.c 			\
			./bonus/allocate.c 		\
			./bonus/get_num.c 		\
			./bonus/control.c			\
			./bonus/srcs.c

CFLAGS	=	-Wall -Wextra -Werror

FT_GET_NEXT_LINE = ./ft_get_next_line/get_next_line.c ./ft_get_next_line/get_next_line_utils.c

CC		=	gcc

OBJS	=	$(SRCS:.c=.o)
OBJBS	=	$(SRCBS:.c=.o)
OBJGNL	=	$(FT_GET_NEXT_LINE:.c=.o)

RM		=	rm -rf

$(NAME)	: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(NAME_BONUS) : $(OBJBS)
	$(CC) $(CFLAGS) -o $(NAME_BONUS) $(FT_GET_NEXT_LINE) $(OBJBS)

all		: $(NAME)

bonus	: $(NAME_BONUS)

clean	:
	$(RM) $(OBJS)
	$(RM) $(OBJBS)

fclean	: clean
	$(RM) $(NAME)
	$(RM) $(NAME_BONUS)

re : fclean all

.PHONY : all clean fclean re
