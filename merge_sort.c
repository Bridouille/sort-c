#include <stdlib.h>

static int	*merge(int *a, int size_a, int *b, int size_b)
{
  int		*c;
  int		ia = 0, ib = 0, ic = 0;

  if (!(c = malloc(sizeof(int) * (size_a + size_b))))
    return (NULL);
  while (ia < size_a && ib < size_b)
    c[ic++] = a[ia] < b[ib] ? a[ia++] : b[ib++];
  while (ia < size_a)
    c[ic++] = a[ia++];
  while (ib < size_b)
    c[ic++] = b[ib++];
  return (c);
}

int	*merge_sort(int *tab, int size_tab)
{
  int	*left;
  int	*right;
  int	*ret;

  if (size_tab <= 1)
    return (tab);
  if (!(left = merge_sort(tab, size_tab / 2)))
    return (NULL);
  if (!(right = merge_sort(&tab[size_tab / 2], size_tab / 2 + size_tab % 2)))
    return (NULL);
  ret = merge(left, size_tab / 2, right, size_tab / 2 + size_tab % 2);
  return (ret);
}
