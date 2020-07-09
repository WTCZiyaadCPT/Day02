/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdecaire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 13:41:18 by zdecaire          #+#    #+#             */
/*   Updated: 2020/07/09 13:55:31 by zdecaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char letter) {
	write (1, &letter, 1);
}

void ft_print_alphabet(void) {
	int letter;

	letter = 'a';
	while(letter <= 'z') {
		ft_putchar(letter);
		letter +=1;
	}
}

