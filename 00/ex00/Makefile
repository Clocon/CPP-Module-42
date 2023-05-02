# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lumorale <lumorale@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/01 13:04:26 by lumorale          #+#    #+#              #
#    Updated: 2023/05/01 13:45:08 by lumorale         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	megaphone

CC				=	c++
CFLAGS			=	-Wall -Werror -Wextra -std=c++98
RM				=	rm -f

SRCS			=	megaphone.cpp\
					
					

#		COLORS		#
CYELLOW			=\033[1;33m
CGREEN			=\033[0;32m
CRED			=\033[0;91m
PURPLE			=\033[0;35m
CRESET			=\033[0m

OBJS			=	$(SRCS:.c=.o)

%.o: %.c
				@$(CC) $(CFLAGS) -c $< -o $@

all:			$(NAME)

$(NAME):		$(OBJS)
				@$(CC) $(FLAGS) $(OBJS)   -o $(NAME)
				@echo "\n$(CYELLOW)$(NAME) $(PURPLE)-> $(CGREEN) compiled$(CRESET)"

clean:
				@$(RM) $(NAME)
				@echo "${CYELLOW}${NAME} $(PURPLE)-> ${CRED} was deleted.${CRESET}"

re:				clean all

.PHONY:			all clean re bonus