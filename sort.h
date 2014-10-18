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
