/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 01:48:24 by idabligi          #+#    #+#             */
/*   Updated: 2023/04/11 02:02:48 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"

int main(int ac, char **av)
{
    (void)ac;
    (void)av;
    // printf("hello\n");
    printf("%s %s\n", av[1], av[2]);
}