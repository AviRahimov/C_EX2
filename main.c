#include <stdio.h>
#include "my_mat.h"

int mat1[10][10] = {{0, 3, 1, 0, 0, 2, 0, 0, 0, 0},
                    {3, 0, 1, 0, 0, 0, 0, 0, 0, 0},
                    {1, 1, 0, 0, 0, 0, 0, 0, 0, 0},
                    {0, 0, 0, 0, 0, 0, 0, 5, 0, 0},
                    {0, 0, 0, 0, 0, 0, 0, 4, 1, 1},
                    {2, 0, 0, 0, 0, 0, 2, 0, 0, 0},
                    {0, 0, 0, 0, 0, 2, 0, 0, 0, 0},
                    {0, 0, 0, 5, 4, 0, 0, 0, 0, 2},
                    {0, 0, 0, 0, 1, 0, 0, 0, 0, 0},
                    {0, 0, 0, 0, 1, 0, 0, 2, 0, 0}};
int main()
{
    int i, j, p;
    char c;
    int mat[10][10];

    while (c != 'D')
    {
        printf("Enter a letter: \n");
        scanf("%c", &c);
        switch (c)
        {
        case 'A':
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                printf("enter the value for cell [%d %d]", i, j);
                scanf("%d", &p);
                mat[i][j] = p;
            }
            
        }
            find_shortest_paths(mat);
            printf("\n");
            break;

        case 'B':
            printf("write i and j indexes you want to find of there is a pth between them: ");
            scanf("%d %d", &i, &j);
            isPath(mat, i, j);
            printf("\n");
            break;

        case 'C':
            printf("write i and j indexes you want to explore the path for them: ");
            scanf("%d %d", &i, &j);
            Shortest_path(mat, i, j);
            printf("\n");
            break;
        }
    }
    return 0;
}