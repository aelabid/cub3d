/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_key.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelabid <aelabid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 12:29:05 by aelabid           #+#    #+#             */
/*   Updated: 2022/12/24 17:58:47 by aelabid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"cub3d.h"

void check_key(int key)
{
    if (key == 13)
	{
		p.walk_dir = 1;
		move_player();
	}
    else if (key == 1)
	{
		p.walk_dir = -1;
		move_player();
    }
	else if (key == 0)
	{
		p.walk_dir = -1;
		move_sides();
    }
	else if (key == 2)
	{
		p.walk_dir = 1;
		move_sides();
	}
	else if (key == 123)
	{
		p.turn_dir = 1;
		p.rotate_angle += p.turn_dir * p.rotat_speed;
	}
	else if (key == 124)
	{
		p.turn_dir = -1;
		p.rotate_angle += p.turn_dir * p.rotat_speed;
	}
	render_image();
}

int	handle_keypress(int keysym, t_mlx   *mlx)
{
	if (keysym == 53)
	{
		mlx_destroy_image(mlx->mlx_ptr, mlx->img);
		mlx_clear_window(mlx->mlx_ptr, mlx->win_ptr);
		mlx_destroy_window(mlx->mlx_ptr, mlx->win_ptr);
		mlx->win_ptr = NULL;
		exit(0);
	} else 
		check_key(keysym);
	return (0);
}
