void	bubble_sort(int *tab, int size_tab)
{
  int	i;
  int	k;
  int	tmp;
  char	flag;

  i = -1;
  flag = 1;
  while (++i < size_tab && flag)
    {
      flag = 0;
      k = -1;
      while (++k < size_tab)
	if (k + 1 < size_tab && tab[k + 1] < tab[k])
	  {
	    tmp = tab[k];
	    tab[k] = tab[k + 1];
	    tab[k + 1] = tmp;
	    flag = 1;
	  }
    }
}
