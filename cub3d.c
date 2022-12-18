// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   cub3d.c                                            :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: aelabid <aelabid@student.42.fr>            +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2022/12/16 07:20:05 by aelabid           #+#    #+#             */
// /*   Updated: 2022/12/18 08:58:35 by aelabid          ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

#include"cub3d.h"

int main(int ac, char **av)
{
    t_mlx   mlx;
    t_img img;
	int fd;
	int nb_row;
	int nb_col;
	t_iso	**matrix;

	fd = open(av[1], O_RDWR);
	matrix = get_sizes_matrix(av[1], &nb_row, &nb_col);
		printf("nb Row %d", nb_row);
	mlx.mlx_ptr = mlx_init();
	mlx.win_ptr = mlx_new_window(mlx.mlx_ptr, nb_col * REC_SIZE, nb_row * REC_SIZE, "Hello world!");
    mlx.img = mlx_new_image(mlx.mlx_ptr, nb_col * REC_SIZE, nb_row * REC_SIZE);
    img.addr = mlx_get_data_addr(mlx.img, &img.bits_per_pixel, &img.line_length,
								&img.endian);
	render_map(&mlx, &img, matrix, nb_row, nb_col);
	mlx_put_image_to_window(mlx.mlx_ptr, mlx.win_ptr, mlx.img, 0, 0);
	mlx_key_hook(mlx.win_ptr, &handle_keypress, &mlx);
	mlx_loop(mlx.mlx_ptr);
	free(mlx.mlx_ptr);

}
