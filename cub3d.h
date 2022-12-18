/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelabid <aelabid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 07:14:53 by aelabid           #+#    #+#             */
/*   Updated: 2022/12/18 14:08:53 by aelabid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
# define CUB3D_H

// includes

# include"mlx.h"
# include<stdlib.h>
# include<math.h>
# include<stdio.h>
# include <unistd.h>
# include"get_next_line.h"

// #include <X11/X.h>
// #include <X11/keysym.h>

// Macros
#define RED_PIXEL 0x00FF0000
#define GREEN_PIXEL 0xFF00
#define WHITE_PIXEL 0xFFFFFF
#define NUM_OF_ROW 11
#define NUM_OF_COL 15
#define REC_SIZE 32

// typedef
typedef struct s_mlx
{
	void	*img;
	void	*mlx_ptr;
	void	*win_ptr;
}	t_mlx;

typedef struct	s_img {
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}	t_img;


typedef struct s_rect
{
	int	x;
	int	y;
	int rec_size;
	int color;
}	t_rect;

//typedef for test
typedef struct t_iso
{
	int		height;
	int		color;
}	t_iso;

//functions 

int	handle_keypress(int keysym, t_mlx   *mlx);
int render_colored_rect(t_mlx *data, t_img *img, t_rect rect);
int render_empty_rect(t_mlx *data, t_img *img, t_rect rect);
void	my_mlx_pixel_put(t_img *data, int x, int y, int color);
int render_map(t_mlx *data, t_img *img, t_iso **matrix, int nbr, int nbc);
t_iso	**get_sizes_matrix(char *path, int *nb_row, int *nb_col);

//functions for test
t_iso	*creat_line(char *str, int numcol);
char	**ft_split(char const *s, char c);
int	ft_atoi(const char *c);
int	ft_numofcolumns(char *s, char spl);
int	numberofrows(int fd, int *nbrow);
t_iso	**create_matrix(int numrow, int fd);
int	number_col_matx(t_iso *mat);
int	openfd(char *ac);
int get_rows(int fd);
#endif