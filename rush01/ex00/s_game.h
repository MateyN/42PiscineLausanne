/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_game.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontaur <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 13:13:17 by gmontaur          #+#    #+#             */
/*   Updated: 2021/07/27 10:39:48 by mnikolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef S_GAME_H
# define S_GAME_H
typedef struct s_game
{
	unsigned char	nb;
	unsigned char	*input;
	unsigned char	*empty_boxes;
	unsigned char	**grid;
}	t_game;

#endif	/* S_GAME_H */
