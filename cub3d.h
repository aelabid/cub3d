/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelabid <aelabid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 07:14:53 by aelabid           #+#    #+#             */
/*   Updated: 2022/12/24 15:05:45 by aelabid          ###   ########.fr       */
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
# include <math.h>
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

typedef struct s_player
{
	double x;
	double y;
	int size;
	int turn_dir;
	int walk_dir;
	double rotate_angle;
	int move_speed;
	double rotat_speed;
}	t_player;

typedef struct s_winSizes
{
	int nb_row;
	int nb_col;
	int win_h;
	int win_w;
}	t_winSizes;

//typedef for test
typedef struct t_iso
{
	int		height;
	int		color;
}	t_iso;
//global variables
t_player p;
t_mlx   mlx;
t_img img;
t_winSizes win;
t_iso	**matrix;

//functions 

int	handle_keypress(int keysym, t_mlx   *mlx);
int render_colored_rect(t_rect rect);
int render_empty_rect(t_rect rect);
void	my_mlx_pixel_put(int x, int y, int color);
int render_map();
void	get_sizes_matrix(char *path);
void    init_player();
void update_player(int key);
void    open_window();
void    render_image();
void  render_player();
void  move_player();
void  move_sides();

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
void DDA(int X0, int Y0, int X1, int Y1);

#endif