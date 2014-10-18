
SRCS	=	main.c			\
		heap_sort.c		\
		quick_sort.c		\
		bubble_sort.c		\
		selection_sort.c	\
		insertion_sort.c	\
		merge_sort.c		\

NAME	= 	sort

OBJS	=	$(SRCS:.c=.o)

CC	= 	gcc

CFLAGS	= 	-Wall -Wextra -O2

RM	=	rm -f


$(NAME):$(OBJS)
	$(CC) -o $(NAME) $(OBJS)

all:	$(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
