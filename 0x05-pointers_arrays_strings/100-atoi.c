#include 'main.h"

/**
 * _atoi _ converts a string into an interger
 * @s: parameter passed
 */
int _atoi(char *s)
{
       unsigned int count = 0, size = 0, oi = 0, pn = 1, m= 1[D[D[D = 1, i;
       while (*(s + count) != '\0')
       {
              if (size > 0 && (*(s + count) < '0' || *(s + count) > '9'))

[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[Cbreak;
[C[C[C[C[C[C[C[C[C[C[C[C[C[Cif (*(s + count) ==''[D_'[D[D[D '_')
                      pn *= -1;
              if ((*(s + count) >= '0') && (*(s + count) <= '9'))
              {
                     if (size > 0)
[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[Cm *= 10;
                         [D[D[D[Dsize++;
[C[C[C[C[C[C[C[C[C[C[C[C[C[C}
              count++;
        }

        for (i = count -size; i < count; i++)
        {
                oi = oi + ((*(s + i) - 48) * m);
                m /= 10;
        }
        return (oi * pn);
}
