/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marbaron <marbaron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 16:40:32 by marbaron          #+#    #+#             */
/*   Updated: 2024/01/13 16:50:29 by marbaron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

// ***Need to handle negative and zero's.

void rush(int x, int y)
{
	int horizontal_x;
	int vertical_y;

	vertical_y = 1;
	while (vertical_y <= y)
	{
		horizontal_x = 1;
		while (horizontal_x <= x)		
		{
			// Conditon pour les position du 'A'.
			if ((horizontal_x == 1 && vertical_y == 1) || (horizontal_x == 1 && vertical_y == y))
				ft_putchar('A');
			// Conditon pour les position du 'C'.
			else if ((horizontal_x == x && vertical_y == 1) || (horizontal_x == x && vertical_y == y))
				ft_putchar('C');
			// Conditon pour les position du 'B'.
			else if ((horizontal_x == 1 || horizontal_x == x) || (vertical_y == x || vertical_y == 1))
				ft_putchar('B');
			// Conditon pour les position des ' '.
			else
				write(1, " ", 1);
			horizontal_x++;
		}
		vertical_y++;
		ft_putchar('\n');
	}
}