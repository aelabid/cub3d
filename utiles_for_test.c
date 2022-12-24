/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utiles_for_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelabid <aelabid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 12:23:34 by aelabid           #+#    #+#             */
/*   Updated: 2022/12/19 12:13:48 by aelabid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"cub3d.h"

int get_rows(int fd)
{
    int nbrow;
    
	numberofrows(fd, &nbrow);
    return(nbrow);
}

int	number_col_matx(t_iso *mat)
{
	int	i;

	i = 0;
	while (mat[i].color != -1)
		i++;
	return (i);
}

int	openfd(char *ac)
{
	int	fd;

	fd = open(ac, O_RDWR);
	return (fd);
}

void	get_sizes_matrix(char *path)
{
	win.nb_row = get_rows(openfd(path));
	matrix = create_matrix(win.nb_row, openfd(path));
	win.nb_col = number_col_matx(matrix[0]);
	win.win_h = win.nb_row * REC_SIZE;
	win.win_w = win.nb_col * REC_SIZE;
}