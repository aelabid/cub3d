# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aelabid <aelabid@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/16 07:22:21 by aelabid           #+#    #+#              #
#    Updated: 2023/01/13 00:50:52 by aelabid          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = cub3d.c create_matrice.c split.c\
		create_line.c atoi.c render_recs.c my_mlx_put.c handle_key.c render_map.c \
		 get_sizes.c init_player.c open_windows.c render_image.c dda.c\
		sizes.c\
		check_wall.c rays.c init.c color_background.c get_texture_image.c\
		pars/main.c pars/get_next_line.c pars/get_next_line_utils.c pars/parsing.c pars/parsing_utils.c \
		pars/check_map.c pars/convert_color.c


OBJ = $(SRC:.c=.o)

NAME = cub3D

# CFLAGS = -Wall -Wextra -Werror
CC = gcc

LIBFT = pars/libft/libft.a

all : $(LIBFT) $(NAME)


%.o: %.c pars/cub.h pars/libft/libft.h
	$(CC) $(CFLAGS) -Imlx -c $< -o $@
	
$(NAME) : $(OBJ)
	$(CC) $(OBJ) -lmlx -framework OpenGL -framework AppKit -o $(NAME) $(LIBFT)

$(LIBFT):
	make -C pars/libft

clean :
	rm -f $(OBJ) 
	make clean -C pars/libft

fclean : clean
	rm -f $(NAME) 
	make fclean -C pars/libft

re : fclean all 

# OBJ = $(SRC:.c=.o)

# # CC_FLAGS = -Wall -Wextra -Werror
# CC = cc

# MLX_FLAGS = -lmlx -framework OpenGL -framework AppKit
# MATH_FLAGS = -lm

# NAME = cub3d
# all: $(NAME)

# $(NAME): $(OBJ)
# 	$(CC) $(CC_FLAGS) $(MATH_FLAGS) $(MLX_FLAGS) $(OBJ) -o $@
	
# %.o: %.c 
# 	$(CC) $(CC_FLAGS) -c $< -o $@

# clean:
# 	rm -rf $(OBJ)
		
# fclean: clean
# 	rm -rf $(NAME)

# re: fclean all