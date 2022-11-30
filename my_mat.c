#include <stdio.h>
#include "my_mat.h"
#define SIZE 10

int mat [SIZE][SIZE] = {0};

int min(int x, int y){
    return (x>y) ?  y : x;
}

// Floyd-Warshall algorithm
void find_shortest_paths(int mat [SIZE][SIZE]){
    for (int k = 0; k < SIZE; k++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            for (int i = 0; i < SIZE; i++)
            {
                if(mat[i][k]!= 0 && mat[k][j]!=0){
                    if(mat[i][j]!=0){
                        mat[i][j] = min(mat[i][j], mat[i][k] + mat[k][j]);
                    }
                    else if(mat[i][j] == 0 && i!=j){
                        mat[i][j] = mat[i][k] + mat[k][j];
                    }
                }
            }
        }
    }
}

// Function number 2
void isPath(int mat[SIZE][SIZE], int x, int y){
    if(mat[x][y]!=0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}

// Function number 3
void Shortest_path(int mat[SIZE][SIZE], int x, int y){
    if(mat[x][y]!=0)
    {
        printf("%d", mat[x][y]);
    }
    else{
        printf("%d", -1);
    }
}