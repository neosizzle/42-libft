SRCS = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
		ft_memset.c ft_strlen.c ft_bzero.c ft_memcpy.c ft_memmove.c \
		ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
		ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c
OBJS= ${SRCS:.c=.o}
LIBS = LIBS HERE
BONUS_SRCS = BONUSES HERE
BONUS_OBJS = ${BONUS_SRCS:.c=.o}
INCLUDE = libft.h
ARRCS = ar rcs
RANLIB = ranlib
CCFLAGS = -Wall -Werror -Wextra
CC = gcc
NAME = libft.a

all : ${NAME}

bonus : ${NAME} ${BONUS_OBJS}
	${ARRCS} ${NAME} ${BONUS_OBJS}
	${RANLIB} ${NAME}


$(NAME) : ${OBJS} ${INCLUDE}
	${ARRCS} ${NAME} ${OBJS}
	${RANLIB} ${NAME}

.c.o :
	${CC} ${CCFLAGS} -I ${INCLUDE} -c $< -o ${<:.c=.o}

clean :
	rm -f ${OBJS} ${BONUS_OBJS}

fclean : clean
	rm -f ${NAME}

re : fclean all

rebonus : fclean bonus
