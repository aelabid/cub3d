# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aelabid <aelabid@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/16 07:22:21 by aelabid           #+#    #+#              #
#    Updated: 2022/12/16 07:55:34 by aelabid          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = cub3d.c
	
OBJ = $(SRC:.c=.o)

# CC_FLAGS = -Wall -Wextra -Werror
CC = cc

MLX_FLAGS = -lmlx -framework OpenGL -framework AppKit
MATH_FLAGS = -lm

NAME = cub3d
all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CC_FLAGS) $(MATH_FLAGS) $(MLX_FLAGS) $(OBJ) -o $@
	
%.o: %.c 
	$(CC) $(CC_FLAGS) -c $<

clean:
	rm -rf $(OBJ)
		
fclean: clean
	rm -rf $(NAME)

re: fclean all