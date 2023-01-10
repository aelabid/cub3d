/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_recs.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelabid <aelabid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 12:25:22 by aelabid           #+#    #+#             */
/*   Updated: 2023/01/10 16:17:25 by aelabid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"cub3d.h"

int render_colored_rect(t_rect rect)
{
	int	i;
	int j;

	if (mlx.win_ptr == NULL)
		return (1);
	i = rect.y;
	while (i < rect.y + rect.rec_size)
	{
		DDA(rect.x, i, rect.x + rect.rec_size - 1 , i, WHITE_PIXEL);
		++i;
	}
	return (0);
}
int render_wall(t_wall wall)
{
	int	i;
	int j;

	if (mlx.win_ptr == NULL)
		return (1);
	// if (wall.y<0)
	// {
	// 	wall.y=0;
	// }
	i = wall.y;
	// if(wall.height>win.win_h)
	// 	wall.height = win.win_h;
	int *color = texture[0].addr;
	int	x_textur ;
	float h;
	double distance_from_top;
	if(ray.is_horizontal)
	{	
		h = c_wall.x / REC_SIZE;
	}
	else
	{
		h = c_wall.y / REC_SIZE;
	}
		x_textur = (h - (int)h) * texture[0].width;
	int y_textur;
	while (i < wall.y + wall.height)
	{
		y_textur = (i - wall.y) * ((double)texture[0].height / wall.height);
		my_mlx_pixel_put(wall.x, i, color[(texture[0].width * y_textur) + x_textur]); 
		++i;
	}
	return (0);
}

int render_empty_rect(t_rect rect)
{
	if (mlx.win_ptr == NULL)
		return (1);
	DDA(rect.x, rect.y, rect.x + rect.rec_size, rect.y, WHITE_PIXEL);
	DDA(rect.x, rect.y, rect.x, rect.y + rect.rec_size , WHITE_PIXEL);
	DDA(rect.x , rect.y + rect.rec_size, rect.x + rect.rec_size, rect.y + rect.rec_size, WHITE_PIXEL);
	DDA(rect.x + rect.rec_size, rect.y + rect.rec_size, rect.x + rect.rec_size, rect.y , WHITE_PIXEL);
	return (0);
}