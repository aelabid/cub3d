/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_image.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelabid <aelabid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 11:58:21 by aelabid           #+#    #+#             */
/*   Updated: 2023/01/13 00:43:29 by aelabid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"cub3d.h"

void    render_image(t_data data)
{
    if (mlx.img)
    {
        mlx_destroy_image(mlx.mlx_ptr, mlx.img);
		mlx_clear_window(mlx.mlx_ptr, mlx.win_ptr);
    }
    mlx.img = mlx_new_image(mlx.mlx_ptr, win.win_w, win.win_h);
    img.addr = mlx_get_data_addr(mlx.img, &img.bits_per_pixel, &img.line_length,
								&img.endian);
	// render_map();
    color_background(data);
    render_player(data);
	// init_player(win);
	mlx_put_image_to_window(mlx.mlx_ptr, mlx.win_ptr, mlx.img, 0, 0);    
}