/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_recs.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelabid <aelabid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 12:25:22 by aelabid           #+#    #+#             */
/*   Updated: 2023/01/06 03:54:49 by aelabid          ###   ########.fr       */
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
	if (wall.y<0)
	{
		wall.y=0;
	}
	i = wall.y;
	if(wall.height>win.win_h)
		wall.height = win.win_h;
	while (i < wall.y + wall.height)
	{
		DDA(wall.x, i, wall.x + wall.width - 1 , i, WHITE_PIXEL);
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