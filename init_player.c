/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_player.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelabid <aelabid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 15:53:09 by aelabid           #+#    #+#             */
/*   Updated: 2022/12/19 10:17:32 by aelabid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"cub3d.h"

void    init_player(t_mlx *data, t_img *img, t_player *p, t_winSizes win)
{
    p->x = win.win_w / 2;
    p->y = win.win_h / 2;
    p->turn_dir = 0;
    p->walk_dir = 0;
    p->rotate_angle = M_PI / 2;
    p->move_speed = 3;
    p->rotat_speed = 3 * (M_PI / 180);
    p->size = 10;
    render_colored_rect(data, img, (t_rect){p->x, p->y, p->size, RED_PIXEL});
}