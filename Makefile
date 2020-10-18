# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ynakamot <ynakamot@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/13 10:43:27 by ynakamot          #+#    #+#              #
#    Updated: 2020/10/18 11:26:30 by ynakamot         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Wextra -Werror
NAME = libft.a

SRCDIR = ./src
SRCFILE = $(wildcard $(SRCDIR)/*.c)
OBJDIR = ./obj
OBJECTS = $(addprefix $(OBJDIR)/, $(notdir $(SRCFILE:.c=.o)))

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	mkdir -p $(OBJDIR)
	gcc $(CFLAGS) -c $< -o $@ -I.

clean:
	$(RM) $(OBJECTS) $(B_OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
