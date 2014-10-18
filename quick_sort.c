void	quick_sort(int *tab, int l, int r)
{
  int	pivot, la, ra, tmp;

  la = l;
  ra = r;
  pivot = tab[(l + r) / 2];
  do {
    while (tab[ra] > pivot)
      --ra;
    while (tab[la] < pivot)
      ++la;
    if (la <= ra)
      {
	tmp = tab[la];
	tab[la] = tab[ra];
	tab[ra] = tmp;
	++la;
	--ra;
      }
  } while (ra >= la);
  if (l < ra)
    quick_sort(tab, l, ra);
  if (la < r)
    quick_sort(tab, la, r);
}
