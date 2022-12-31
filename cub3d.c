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
	int fd;
	
	fd = open(av[1], O_RDWR);
	get_sizes_matrix(av[1]);
	init_info();
	open_window();
	init_player(win);
	render_image();
	mlx_key_hook(mlx.win_ptr, &handle_keypress, &mlx);
	// mlx_loop_hook(mlx.win_ptr, &handle_keypress, &mlx);
	mlx_loop(mlx.mlx_ptr);
	free(mlx.mlx_ptr);
}
