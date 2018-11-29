/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etlagors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 16:55:05 by etlagors          #+#    #+#             */
/*   Updated: 2018/11/06 16:59:23 by etlagors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int		main(int argc, char **argv)
{
	int		descripteur;
	char	character;

	if (argc == 1)
		write(1, "File name missing.\n", 19);
	else if (argc == 2)
	{
		descripteur = open(argv[1], O_RDONLY);
		if (descripteur == -1)
			return (0);
		while (read(descripteur, &character, 1))
			write(1, &character, 1);
		close(descripteur);
	}
	else
		write(1, "Too many arguments.\n", 20);
	return (0);
}
