/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etlagors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 13:17:48 by etlagors          #+#    #+#             */
/*   Updated: 2018/11/06 13:25:16 by etlagors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

int		main(int argc, char **argv)
{
	int		cntr;

	cntr = 1;
	if (argc != 1)
	{
		while (cntr < argc)
		{
			ft_putstr(argv[cntr]);
			ft_putchar('\n');
			cntr++;
		}
	}
	return (0);
}
