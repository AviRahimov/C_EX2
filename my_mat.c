#include <stdio.h>
#include "my_mat.h"
#define TRUE 1
#define FALSE 0
#define SIZE 10

// The original 2d array
int mat[SIZE][SIZE];
// Using Dynamic Programming to calculate the shortest path for two nodes
int DpMat[SIZE][SIZE];
// The indexes in the arrays

void find_paths(int array [SIZE][SIZE]){
    BuildDpMat(array);
    for (int k = 0; k < SIZE; k++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            for (int i = 0; i < SIZE; i++)
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
void BuildDpMat(int arr[SIZE][SIZE]){
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            DpMat[i][j] = arr[i][j];
        }
        
    }
    
}

// Function number 2
void isPath(int x, int y){
    if(DpMat[x][y]!=0)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }
}

// Function number 3
int Shortest_path(int x, int y){
    if(DpMat[x][y]!=0)
    {
        return DpMat[x][y];
    }
    return -1;
}