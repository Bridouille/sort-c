void	selection_sort(int *tab, int size_tab)
{
  int	i;
  int	j;
  int	big;
  int	tmp;

  for (i= size_tab - 1; i > 0; --i)
    {
      big = 0;
      for (j = 1;j <= i; ++j)
	if (tab[j] > tab[big])
	  big = j;
      tmp = tab[big];
      tab[big] = tab[i];
      tab[i] = tmp;
    }
}
