#ifndef MAP_PRINTING_H
# define MAP_PRINTING_H

# include "0_main.h"

void	print_map(t_vars *vars);
void	choose_texture_to_print(t_vars *vars);
void	print_texture(int **texture, int starting_x, int starting_y, t_vars *vars);
void	print_overlay(t_vars *vars);

#endif