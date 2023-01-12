/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_player.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelabid <aelabid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 15:53:09 by aelabid           #+#    #+#             */
/*   Updated: 2023/01/12 04:35:37 by aelabid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"cub3d.h"


void  render_line()
{
    double nx;
    double ny;

    nx = p.x + p.size / 2;
    ny = p.y + p.size / 2;
    DDA(nx, ny, nx + cos(p.rotate_angle) * 40, ny + sin(p.rotate_angle) * 40, WHITE_PIXEL);
}


void    init_player()
{
    p.x = win.win_w / 2 - 5;
    p.y = win.win_h / 2 - 5;

    p.turn_dir = 0; //left "A" right "D"
    p.walk_dir = 0; //nichan "W" lour "S"
    p.rotate_angle = 3 * (M_PI / 2);
    p.move_speed = 6;
    p.rotat_speed = 5 * (M_PI / 180);
    p.size = 11;
}

void  move_player()
{
    double tempx;
    double tempy;
    int steps;
    
    steps = p.walk_dir * p.move_speed;
    tempx = p.x + cos(p.rotate_angle) * steps;
    tempy = p.y + sin(p.rotate_angle) * steps;
    // if (!is_wall(tempx, tempy)&& !is_wall(tempx + p.size, tempy+p.size))
    // {
        p.x = tempx;
        p.y = tempy;
    // }
    if (p.x <= 0)
        p.x = 0;
    if (p.y <= 0)
        p.y = 0;
    if (p.x >= win.win_w)
        p.x = win.win_w;
    if (p.y >= win.win_h)
        p.y = win.win_h;
}


void  move_sides()
{
    int steps = p.walk_dir * p.move_speed;
    double tempx;
    double tempy;

    tempx = p.x + cos(p.rotate_angle - (M_PI / 2)) * steps ;
    tempy = p.y + sin(p.rotate_angle - (M_PI / 2)) * steps ;
    // if (!is_wall(tempx, tempy) && !is_wall(tempx + p.size, tempy+p.size))
    // {
        p.x = tempx;
        p.y = tempy;
    // }
    if (p.x <= 0)
        p.x = 0;
    if (p.y <= 0)
        p.y = 0;
    if (p.x >= win.win_w)
        p.x = win.win_w;
    if (p.y >= win.win_h)
        p.y = win.win_h;
    
}

void  render_player()
{
    // render_colored_rect((t_rect){p.x, p.y, p.size, RED_PIXEL});
    render_lines();
}