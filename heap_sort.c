static void	makeheap(int *tab, int size_tab)
{
  int		i, val, s, f;

  for (i = 1; i < size_tab; i++)
    {
      val = tab[i];
      s = i;
      f = (s - 1) / 2;
      while (s > 0 && tab[f] < val)
        {
	  tab[s] = tab[f];
	  s = f;
	  f = (s - 1) / 2;
        }
      tab[s] = val ;
    }
}

void	heap_sort(int *tab, int n)
{
  int	i, s, f, ivalue ;

  makeheap(tab, n);
  for (i = n - 1 ; i > 0 ; i--)
    {
      ivalue = tab[i];
      tab[i] = tab[0];
      f = 0;
      s = (i == 1) ? -1 : (i > 2 && tab[2] > tab[1]) ? 2 : 1;
      while (s >= 0 && ivalue < tab[s])
        {
	  tab[f] = tab[s];
	  f = s;
	  s = 2 * f + 1;

	  if (s + 1 <= i - 1 && tab[s] < tab[s + 1])
	    s++;
	  if (s > i - 1)
	    s = -1;
        }
      tab[f] = ivalue;
    }
}
