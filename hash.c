/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hash.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astadnik <astadnik@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 17:20:40 by astadnik          #+#    #+#             */
/*   Updated: 2017/12/02 17:56:38 by astadnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hotrace.h"

size_t	hash(const char *str)
{
    size_t	hash = 5381;

    while (*str)
        hash = ((hash << 5) + hash) + (size_t)*str++; /* hash * 33 + c */

    return (hash % TABLE_SIZE);

}
