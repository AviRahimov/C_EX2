#include <stdio.h>
#include "my_mat.h"
#define TRUE 1
#define FALSE 0

// N is the number of nodes in the graph
int N;
// The original 2d array
int mat[N][N];
// Using Dynamic Programming to calculate the shortest path for two nodes
int DpMat[N][N];
// The indexes in the arrays
int i, j, k;

void find_paths(int mat[][]){
    BuildDpMat(mat);
    for (k = 0; k < N; k++)
    {
        for (j = 0; j < N; j++)
        {
            for (i = 0; i < N; i++)
            {
                if(DpMat[i][k] + DpMat[k][j] < DpMat[i][j])
                {
                    DpMat[i][j] = DpMat[i][k] + DpMat[k][j];
                }
            }
            
        }
        
    }
    
}
//Copy the original 2d array to the DpMat array
void BuildDpMat(int arr[][]){
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            DpMat[i][j] = arr[i][j];
        }
        
    }
    
}

// Function number 2
void isPath(int x, int y){
    if(mat[x][y]!=0)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE")
    }
}

// Function number 3
int Shortest_path(int x, int y){
    if(mat[x][y]!=0)
    {
        return DpMat[x][y];
    }
    return -1;
}