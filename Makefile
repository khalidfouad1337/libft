
SRCS_B = ft_lstnew.c ft_lstsize.c ft_lstadd_front.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
OBG_B = ${SRCS_B:.c=.o}
SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c
OBG = ${SRCS:.c=.o}
NAME = libft.a
CC = gcc
AR = ar -rc
CFLAGS = -Wall -Wextra -Werror 
RM = rm -rf

%.o : %.c
	   ${CC} ${CFLAGS} -c $< -o $@

${NAME} : ${OBG}
		${AR} $@ ${OBG} 
all: ${NAME}

bonus: ${OBG_B}
	${AR} ${NAME} ${OBG_B}

clean:
		${RM} ${OBG} ${OBG_B}

fclean: clean
		${RM} ${NAME}

re:	fclean all

.PHONY: all clean fclean re bonus