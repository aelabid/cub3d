/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelabid <aelabid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 07:20:05 by aelabid           #+#    #+#             */
/*   Updated: 2022/12/16 07:56:21 by aelabid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"cub3d.h"

void	my_mlx_pixel_put(t_img *data, int x, int y, int color)
{
	char	*dst;

	dst = data->addr + (y * data->line_length + x * (data->bits_per_pixel / 8));
	*(unsigned int*)dst = color;
}

int main()
{
    t_mlx   mlx;
    t_img img;
	mlx.mlx_ptr = mlx_init();
	mlx.win_ptr = mlx_new_window(mlx.mlx_ptr, 1800, 1200, "Hello world!");
    mlx.img = mlx_new_image(mlx.mlx_ptr, 1800, 1200);
    img.addr = mlx_get_data_addr(mlx.img, &img.bits_per_pixel, &img.line_length,
								&img.endian);
    my_mlx_pixel_put(&img, 5, 5, 0x00FF0000);
	mlx_put_image_to_window(mlx.mlx_ptr, mlx.win_ptr, mlx.img, 0, 0);

	mlx_loop(mlx.mlx_ptr);

}