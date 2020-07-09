/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdecaire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 14:13:58 by zdecaire          #+#    #+#             */
/*   Updated: 2020/07/09 14:42:20 by zdecaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_putchar(char letter) {
	write(1 ,&letter, 1);
}
void ft_print_reverse_alphabet (void) {
	int letter;

	letter = 'z';
	while (letter >= 'a') {
		ft_putchar(letter);
		letter -=1;
	}
}

