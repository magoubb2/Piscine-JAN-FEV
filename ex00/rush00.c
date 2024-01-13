/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marbaron <marbaron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 17:10:03 by marbaron          #+#    #+#             */
/*   Updated: 2024/01/13 17:40:53 by marbaron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void    rush(int x, int y)
{
    int v;
    int h;

	v = 1;
    if (x < 0 || y < 0)
        return ;
    while (v <= y)
    {
        h = 1;
        while (h <= x)
        {
            if ((h == 1 && v == 1) || (h == 1 && v == y) || 
                (h == x && v == 1) || (y == v && h == x))
                ft_putchar('o');
            else if ((h > 1 && h < x) && (v > 1 && v < y))
                ft_putchar(' ');
            else if ((y > 1 && v < y && h == 1) || (y > 1 && v < y && h == x))
                ft_putchar('|');
            else
                ft_putchar('-');
            h++;
        }
        ft_putchar('\n');
        v++;
    }
}
