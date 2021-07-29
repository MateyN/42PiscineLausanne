/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fonctions.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontaur <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 13:50:25 by gmontaur          #+#    #+#             */
/*   Updated: 2021/07/18 13:50:27 by gmontaur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FONCTIONS_H
# define FT_FONCTIONS_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdbool.h>
# include "s_game.h"

void			ft_obvious_solve(t_game *game);
bool			ft_solve(t_game *game, unsigned char ***solved);

unsigned char	ft_input_size(char *str);
unsigned char	*ft_validate_inputs_splits(char *str);
unsigned char	*ft_split_inputs(char *str, unsigned char nb);
bool			ft_is_bounded(unsigned char *input, unsigned char nb);
bool			ft_bouds_are_once(unsigned char *input, unsigned char nb);

void			ft_put_nb_grid(unsigned char i, unsigned char j,
					unsigned char nb_to_write, t_game *game);
void			ft_found_one(unsigned char position, t_game *game);
void			ft_found_nb(unsigned char j, t_game *game);
void			ft_print_grid(unsigned char **grid, unsigned char nb);

unsigned char	**ft_init_tab(unsigned char nb);
unsigned char	**ft_copy_tab(unsigned char **grid, unsigned char nb);

t_game			ft_make_game(unsigned char nb, unsigned char *input);
t_game			ft_copy_game(t_game *game);
unsigned char	*ft_make_empty_boxes(unsigned char nb);
unsigned char	*ft_copy_empty_boxes(unsigned char nb,
					unsigned char *empty_boxes);

char			ft_check(unsigned char line, unsigned char column,
					t_game *game);
bool			ft_check_line(unsigned char line, t_game *game);
bool			ft_check_col(unsigned char col, t_game *game);
bool			ft_check_game(t_game *game);

void			ft_free_game(t_game *game);
void			ft_free_tab(unsigned char **grid, unsigned char nb);

unsigned char	compute_pos_nb(unsigned char i, unsigned char j,
					bool *decider, t_game *game);
unsigned char	ft_find_zero_line(unsigned char line, t_game *game);
unsigned char	ft_find_zero_col(unsigned char col, t_game *game);
bool			ft_select_box(t_game *game, unsigned char *line,
					unsigned char *col);

void			ft_assign(unsigned char line, unsigned char col,
					unsigned char *line_ptr, unsigned char *col_ptr);

#endif	/* FT_FUNCTIONS_H */
