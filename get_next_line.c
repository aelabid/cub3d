/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelabid <aelabid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 18:27:00 by aelabid           #+#    #+#             */
/*   Updated: 2022/12/18 13:37:45 by aelabid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#define BUFFER_SIZE 100000

char	*ft_before(char *all_line)
{
	int		i;
	char	*temp;
	int		len;

	len = 0;
	i = 0;
	while (all_line[len] != '\0')
	{
		if (all_line[len] == '\n')
		{
			len++;
			break ;
		}
		len++;
	}
	temp = malloc((len + 1) * sizeof(char));
	if (!temp)
		return (NULL);
	while (i < len)
	{
		temp[i] = all_line[i];
		i++;
	}
	temp[i] = '\0';
	return (temp);
}

char	*get_all_line(char *line, int fd)
{
	int		byte;
	char	*buf;

	buf = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buf)
		return (NULL);
	byte = 1;
	while (byte > 0 && !ft_strchr(line))
	{
		byte = read(fd, buf, BUFFER_SIZE);
		if (byte == -1)
		{
			free(buf);
			return (NULL);
		}
		buf[byte] = '\0';
		if (byte == 0)
			break ;
		line = ft_strjoin(line, buf);
	}
	free(buf);
	return (line);
}

int	ft_checkend(char *ret)
{
	if (ft_strlen(ret) == 0)
	{
		free(ret);
		return (0);
	}
	return (1);
}	

char	*ft_after(char *all_line)
{
	char	*ret;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (all_line[i] && all_line[i] != '\n')
		i++;
	if (all_line[i] == '\0')
	{
		free(all_line);
		return (NULL);
	}
	ret = malloc((ft_strlen(all_line) - i) * sizeof(char));
	if (!ret)
		return (NULL);
	while (all_line[++i])
		ret[j++] = all_line[i];
	ret[j] = '\0';
	free(all_line);
	if (ft_checkend(ret) == 0)
		return (NULL);
	return (ret);
}

char	*get_next_line(int fd)
{
	static char	*all_line;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	all_line = get_all_line(all_line, fd);
	if (all_line == NULL)
		return (NULL);
	line = ft_before(all_line);
	all_line = ft_after(all_line);
	return (line);
}
