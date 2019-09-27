# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lrorscha <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/26 20:49:54 by lrorscha          #+#    #+#              #
#    Updated: 2019/09/26 21:31:32 by lrorscha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit
SRC = ft_read_game.c fillit.c ft_solver.c ft_build_the_wall.c ft_init_game.c
OBJ = *.o
LIBSRC = libft/ft_memset.c libft/ft_bzero.c libft/ft_memcpy.c libft/ft_memccpy.c libft/ft_memmove.c libft/ft_memchr.c libft/ft_memcmp.c libft/ft_strlen.c libft/ft_strdup.c libft/ft_strcpy.c libft/ft_strncpy.c libft/ft_strcat.c libft/ft_strncat.c libft/ft_strlcat.c libft/ft_strchr.c libft/ft_strrchr.c libft/ft_strstr.c libft/ft_strnstr.c libft/ft_strcmp.c libft/ft_strncmp.c libft/ft_atoi.c libft/ft_isalpha.c libft/ft_isdigit.c libft/ft_isalnum.c libft/ft_isascii.c libft/ft_isprint.c libft/ft_toupper.c libft/ft_tolower.c libft/ft_memalloc.c libft/ft_memdel.c libft/ft_strnew.c libft/ft_strdel.c libft/ft_strclr.c libft/ft_striter.c libft/ft_striteri.c libft/ft_strmap.c libft/ft_strmapi.c libft/ft_strequ.c libft/ft_strnequ.c libft/ft_strsub.c libft/ft_strjoin.c libft/ft_strtrim.c libft/ft_strsplit.c libft/ft_itoa.c libft/ft_putchar.c libft/ft_putstr.c libft/ft_putendl.c libft/ft_putnbr.c libft/ft_putchar_fd.c libft/ft_putstr_fd.c libft/ft_putendl_fd.c libft/ft_putnbr_fd.c libft/ft_lstnew.c libft/ft_lstmap.c libft/ft_lstiter.c libft/ft_lstdelone.c libft/ft_lstdel.c libft/ft_lstadd.c
LIBHEADER = libft/libft.h
LIBFT = libft.a
HEADER = fillit.h
FLAGS = -Wall -Wextra -Werror
COMPILE = gcc

all: $(NAME)
$(NAME):
	@make -f libft/makefile re
	@echo "Done | Library compilation complete"
	@$(COMPILE) $(FLAGS) -c $(SRC)
	@echo "Done | Object files successfuly created"
	@$(COMPILE) -o $(NAME) $(OBJ) $(LIBFT)
	@echo "Done | Compilation success"
clean:
	@echo "Done | Object files deleted"
	@rm -f $(OBJ)
	@make -f libft/makefile clean
fclean:
	@echo "Done | Object files and executable/library files deleted"
	@rm -f $(NAME) $(OBJ)
	@make -f libft/makefile fclean
norm:
	@echo "\nNorminated files #Fillit:\n$(SRC) $(HEADER)\n"
	@norminette $(SRC) $(HEADER)
	@echo "\nNorminated files #Libft:\n$(LIBSRC) $(LIBHEADER)\n"
	@norminette $(LIBSRC) $(LIBHEADER)
re: fclean all
