#include "matrix_dis.h"

void matrix_dis(double (*m)[197], Way *w)
{
    int i, j, k;

    for (i = 0; i < 197; i++)
    {
        for (j = 0; j < 197; j++)
        {
            m[i][j] = 0;
        }
    }

    for (k = 0; k < 219; k++)
    {
        i = w[k].aStation[0];
        j = w[k].aStation[1];
        m[i][j] = w[k].len;
        m[j][i] = w[k].len;
    }
}