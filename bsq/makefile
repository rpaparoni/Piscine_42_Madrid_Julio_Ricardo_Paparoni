# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rpaparon <rpaparon@student.42madrid.c      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/22 18:03:32 by rpaparon          #+#    #+#              #
#    Updated: 2024/07/24 17:33:31 by rpaparon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq
SOURCES = main.c ft_write_map.c
OBJECTS = $(SOURCES:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror
INCLUDE = -I include
RM = rm -r

all: $(NAME)
$(NAME) : $(OBJECTS)
	$(CC) $(CFLAGS) $(INCLUDE) -o $(NAME) $(OBJECTS)                        

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

.PHONY: all clean fclean                               
