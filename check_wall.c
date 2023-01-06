/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_wall.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelabid <aelabid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 18:11:14 by aelabid           #+#    #+#             */
/*   Updated: 2023/01/06 04:55:16 by aelabid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"cub3d.h"

// int is_wall(double x, double y)
// {
// 	int nx;
// 	int ny;
    
//     nx = floor(x / REC_SIZE);
//     ny = floor(y / REC_SIZE);
//     // printf("x = %d\t y = %d\t", nx, ny);
//     // printf("height = %d\n", matrix[3][4].height);
//     return (0);
// }
int is_wall(double x, double y)
{
	int nx;
	int ny;
    
    nx = floor(x / REC_SIZE);
    ny = floor(y / REC_SIZE);
    return (matrix[ny][nx].height != 0);
}