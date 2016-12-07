#include "libft.h"

static int		ctwords(char const *s, char delim)
{
  int	i;
  int	count;

  i = 0;
  count = 0;
  while (s[i])
    {
      if (s[i] != delim)
	{
	  if(s[i + 1] == delim || !s[i + 1])
	    count += 1;
	}
      i += 1;
    }
  return (count);
}

static int		ctletters(char const *s, char delim)
{
  int	count;

  count = 0;
  while (s[count] != delim)
    count += 1;
  return (count);
}

char	**ft_strsplit(char const *s, char c)
{
  char	**ret;
  int	i;
  int	j;
  int	k;

  if ((ret = malloc(sizeof(char *) * (ctwords(s, c) + 1))) == 0)
    return (0);
  k = -1;
  i = 0;
  j = 0;
  while (s[++k])
    {
      i += (j != 0 && s[k] == c) ? 1 : 0;
      j = (s[k] == c) ? 0 : j;
      if (s[k] != c)
	{
	  if (j == 0)
	    if ((ret[i] = malloc(sizeof(char) * (ctletters(&s[k], c) + 1))) == 0)
		return (0);
	  ret[i][j++] = s[k];
	  ret[i][j] = '\0';
	 }
    }
      ret[++i] = (j != 0) ? '\0' : ret[++i];
  return (ret);
}
