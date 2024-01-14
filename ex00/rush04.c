/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: margueritebaronbeliveau <margueritebaro    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 16:40:32 by marbaron          #+#    #+#             */
/*   Updated: 2024/01/13 19:25:16 by margueriteb      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

// Need to fix when only x:1 or y:1
void	rush(int x, int y)
{
	int	horizontal_x;
	int	vertical_y;
	
	if (x <= 0 || y <= 0)
		return ;
	vertical_y = 1;
	while (vertical_y <= y)
	{
		horizontal_x = 1;
		while (horizontal_x <= x)
		{
			// Conditon pour les position du 'A'.
			if ((horizontal_x == 1 && vertical_y == 1) || (horizontal_x == x && vertical_y == y))
				ft_putchar('A');
			// Conditon pour les position du 'C'.
			else if ((horizontal_x == x && vertical_y == 1) || (horizontal_x == 1 && vertical_y == y))
				ft_putchar('C');
			// Conditon pour les position du 'B'.
			else if ((horizontal_x == 1 || horizontal_x == x) || (vertical_y == y || vertical_y == 1))
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