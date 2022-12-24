# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aelabid <aelabid@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/16 07:22:21 by aelabid           #+#    #+#              #
#    Updated: 2022/12/19 15:46:04 by aelabid          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = cub3d.c create_matrice.c get_next_line_utils.c get_next_line.c split.c\
		create_line.c atoi.c render_recs.c my_mlx_put.c handle_key.c render_map.c \
		utiles_for_test.c get_sizes.c init_player.c open_windows.c render_image.c dda.c

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