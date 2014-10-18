/*
** sort.h for sort.h in /home/bridou_n/test/ex
** 
** Made by Nicolas Bridoux
** Login   <bridou_n@epitech.net>
** 
** Started on  Sat Oct 18 19:20:00 2014 Nicolas Bridoux
** Last update Sat Oct 18 19:25:56 2014 Nicolas Bridoux
*/

#ifndef SORT_H_
# define SORT_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	bubble_sort(int *tab, int size_tab);
void	selection_sort(int *tab, int size_tab);
void	insertion_sort(int *tab, int size_tab);
int	*merge_sort(int *tab, int size_tab);
void	heap_sort(int *tab, int n);
void	quick_sort(int *tab, int l, int r);

#endif /* !SORT_H_ */
