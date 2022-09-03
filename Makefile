
OBG_B = ${SRCS_B:.c=.o}
SRCS = ft_isalpha.c ft_isdigit.c
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