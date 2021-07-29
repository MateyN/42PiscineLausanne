DIR_S	= SRCS

SRCS	= ${DIR_S}/ft_putchar.c\
		  ${DIR_S}/ft_swap.c\
		  ${DIR_S}/ft_putstr.c\
		  ${DIR_S}/ft_strlen.c\
		  ${DIR_S}/ft_strcmp.c\

DIR_L	= includes

OBJS	= ${SRCS:.c=.o}

NAME	= libft.a

CC		= gcc

RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror

all:		${NAME}

.c.o:
			${CC} ${CFLAGS} -I${DIR_L} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			ar -crs ${NAME} ${OBJS}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
