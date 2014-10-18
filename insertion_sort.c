void	insertion_sort(int *tab, int size_tab)
{
  int	i;
  int	j;
  int	key;

  for (j = 1; j < size_tab; j++)
    {
      key = tab[j];
      for (i = j - 1; (i >= 0) && (tab[i] > key); i--)
	tab[i + 1] = tab[i];
      tab[i + 1] = key;
    }
}
