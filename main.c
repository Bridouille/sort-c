#include "sort.h"

static void	print_tab(int *tab, size_t size)
{
  size_t	i;

  i = 0;
  while (i < size)
    {
      printf("%s%d%s", !i ? "[" : "", tab[i], i + 1 < size ? "," : "]");
      ++i;
    }
  printf("\n");
}

static int	*get_tab(int ac, char **av)
{
  int		i;
  int		*ret;

  if (!(ret = malloc(sizeof(int) * ac - 1)))
    return (NULL);
  for (i = 1; i < ac; ++i)
    ret[i - 1] = atoi(av[i]);
  return (ret);
}

int		main(int ac, char *av[])
{
  int		*init_tab, *tab, *res;
  size_t	size_tab = (ac - 1) * sizeof(int);

  if (ac == 1)
    return (fprintf(stderr, "Usage : %s nb [nb [nb [nb ...]]]\n", av[0]));
  if (!(init_tab = get_tab(ac, av)) || !(tab = malloc(sizeof(int) * ac - 1)))
    return (fprintf(stderr, "Not enought memory\n"));
  printf("Initial array : ");
  memcpy(tab, init_tab, size_tab);
  print_tab(tab, ac - 1);
  printf("\n");

  printf("Merge sort : \t\t");
  if (!(res = merge_sort(tab, ac - 1)))
    return (fprintf(stderr, "Not enought memory\n"));
  print_tab(res, ac - 1);

  printf("Insertion sort : \t");
  memcpy(tab, init_tab, size_tab);
  insertion_sort(tab, ac - 1);
  print_tab(tab, ac - 1);

  printf("Bubble sort : \t\t");
  memcpy(tab, init_tab, size_tab);
  bubble_sort(tab, ac - 1);
  print_tab(tab, ac - 1);

  printf("Selection sort : \t");
  memcpy(tab, init_tab, size_tab);
  selection_sort(tab, ac - 1);
  print_tab(tab, ac - 1);

  printf("After Heap sort : \t");
  heap_sort(tab, ac - 1);
  print_tab(tab, ac - 1);

  printf("After Quick sort : \t");
  memcpy(tab, init_tab, size_tab);
  quick_sort(tab, 0, ac - 1 - 1);
  print_tab(tab, ac - 1);
  free(tab);
  free(init_tab);
  return (0);
}
