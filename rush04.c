/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simohamm <simohamm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 16:48:54 by sina              #+#    #+#             */
/*   Updated: 2023/08/20 17:35:42 by simohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void print_line(char start, char middle, char end, int width)
{
    ft_putchar(start);
    int i = 1;
    while (i++ < width - 1)
        ft_putchar(middle);
    if (width > 1)
        ft_putchar(end);
    ft_putchar('\n');
}

void rush(int x, int y)
{
    if (x <= 0 || y <= 0)
        return;

    print_line('A', 'B', 'C', x);

    int i = 1;
    while (i++ < y - 1)
        print_line('B', ' ', 'B', x);

    if (y > 1)
        print_line('C', 'B', 'A', x);
}
