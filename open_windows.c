/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_windows.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelabid <aelabid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 07:14:34 by aelabid           #+#    #+#             */
/*   Updated: 2022/12/18 13:02:08 by aelabid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"cub3d.h"

void    open_window(t_mlx *mlx, t_img *img)
{
    mlx->mlx_ptr = mlx_init();
	// mlx->win_ptr = mlx_new_window(mlx->mlx_ptr, NUM_OF_ROW * REC_SIZE, NUM_OF_COL * REC_SIZE, "Hello world!");
    // (*mlx).img = mlx_new_image((*mlx).mlx_ptr, NUM_OF_ROW * REC_SIZE, NUM_OF_COL * REC_SIZE);
    // (*img).addr = mlx_get_data_addr((*mlx).img, img->bits_per_pixel, img->line_length,
	// 							img->endian);
}