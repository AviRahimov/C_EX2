#include <stdio.h>
#include "my_mat.h"
#define TRUE 1
#define FALSE 0
#define SIZE 10

// The original 2d array
int mat[SIZE][SIZE];

int min(int x, int y){
    return (x>y) ?  y : x;
}
void find_shortest_paths(int array [SIZE][SIZE]){
    for (int k = 0; k < SIZE; k++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            for (int i = 0; i < SIZE; i++)
            {
                if(array[i][k]!= 0 && array[k][j]!=0){
                    if(array[i][j]!=0){
                        array[i][j] = min(array[i][j], array[i][k] + array[k][j]);
                    }
                    else{
                        array[i][j] = array[i][k] + array[k][j];
                    }
                }
            }
            
        }
        
    }
    
}

// Function number 2
void isPath(int mat[10][10], int x, int y){
    if(mat[x][y]!=0)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }
}

// Function number 3
void Shortest_path(int mat[10][10], int x, int y){
    if(mat[x][y]!=0)
    {
        printf("%d", mat[x][y]);
    }
    else{
        printf("%d", -1);
    }
}