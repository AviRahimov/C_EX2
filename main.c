#include <stdio.h>
#include "my_mat.h"

int main()
{
    int i = 0, j = 0, p = 0;
    char c = 0;
    int mat[10][10];

    while (c != 'D')
    {
        scanf("%c", &c);

        switch (c)
        {
            case 'A':
              for (int i = 0; i < 10; i++)
                {
                   for (int j = 0; j < 10; j++)
                   {
                       scanf("%d", &p);
                        mat[i][j] = p;
                    }
                }
                find_shortest_paths(mat);
                break;

        case 'B':
            scanf("%d %d", &i, &j);

            isPath(mat, i, j);
            printf("\n");
            break;

        case 'C':
            scanf("%d %d", &i, &j);

            Shortest_path(mat, i, j);
            printf("\n");
            break;
        }
    }
    return 0;
}