# ************************************************************************** #
#                                                                            #
#                                                        :::      ::::::::   #
#   Makefile                                           :+:      :+:    :+:   #
#                                                    +:+ +:+         +:+     #
#   By: psaumet <marvin@42.fr>                     +#+  +:+       +#+        #
#                                                +#+#+#+#+#+   +#+           #
#   Created: 2020/08/15 11:05:30 by psaumet           #+#    #+#             #
#   Updated: 2020/08/15 18:14:06 by psaumet          ###   ########.fr       #
#                                                                            #
# ************************************************************************** #

NAME 		= 	libft.a

################################### SOURCES ##################################

SRCS 		+=	ft_memset.c	\
				ft_bzero.c	\
				ft_memcpy.c	\
				ft_memccpy.c	\
				ft_memmove.c	\
				ft_memchr.c	\
				ft_memcmp.c	\
				ft_strlen.c	\
				ft_isalpha.c	\
				ft_isdigit.c	\
				ft_isalnum.c	\
				ft_isascii.c	\
				ft_isprint.c	\
				ft_toupper.c	\
				ft_tolower.c	\
				ft_strchr.c	\
				ft_strrchr.c	\
				ft_strncmp.c	\
				ft_strnstr.c	\
				ft_strlcpy.c	\
				ft_strlcat.c \
				ft_atoi.c	\
				ft_calloc.c	\
				ft_strdup.c	\
				ft_substr.c	\
				ft_strjoin.c	\
				ft_strtrim.c	\
				ft_split.c	\
				ft_itoa.c	\
				ft_strmapi.c	\
				ft_putchar_fd.c	\
				ft_putstr_fd.c	\
				ft_putendl_fd.c	\
				ft_putnbr_fd.c	

SRCSBO		=	ft_lstnew.c	\
				ft_lstadd_front.c	\
				ft_lstsize.c	\
				ft_lstlast.c	\
				ft_lstadd_back.c	\
				ft_lstdelone.c	\
				ft_lstclear.c	\
				ft_lstiter.c	\
				ft_lstmap.c	

################################# VARIABLES ##################################

OBJS		=	${SRCS:.c=.o}
OBJSBO		=	${SRCSBO:.c=.o}
INCLUDES	=	libft.h
CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror


################################### RULES ####################################

all:		$(NAME)

$(NAME):
			$(CC) $(CFLAGS) -c $(SRCS)
			@ar rc $(NAME) $(OBJS)
			@ranlib $(NAME)

clean:
	/bin/rm -f *.o

fclean:		clean
	/bin/rm -f  $(NAME)

re:		fclean all

bonus:		${OBJSBO} ${OBJS}
		@ar rc $(NAME) ${OBJSBO} ${OBJS}
		@ranlib $(NAME)

.PHONY:		all clean fclean re
