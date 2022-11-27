#include <stdio.h>
#include "my_mat.h"

// creating a two dimensional array with size 10*10
// int mat [10][10];
// two indexes of the array
int i,j;

void Mat_numbers();
int main(){
    char c;
    printf("Enter a letter: \n");
    scanf("%c", &c);
    while(c != 'D'){
        switch (c)
    {
    case 'A':
        Mat_numbers();
        break;

    case 'B':
        printf("write i and j indexes you want to explore the path for them: ");
        scanf("%d, %d", &i, &j);
        isPath(i, j);
        break;

    case 'C':
        printf("write i and j indexes you want to explore the path for them: ");
        scanf("%d, %d", &i, &j);
        Shortest_path(i, j);
        break;

    default:
    printf("Wrong letter\n");
        break;
    }
    printf("Enter a letter: \n");
    scanf("%c", &c);
    }
// Function number 1
    void Mat_numbers(){
        int mat [10][10] =  {0, 3, 1, 0, 0, 2, 0, 0, 0, 0}, 
                            {3, 0, 1, 0, 0, 0, 0, 0, 0, 0},
                            {1, 1, 0, 0, 0, 0, 0, 0, 0, 0}, 
                            {0, 0, 0, 0, 0, 0, 0, 5, 0, 0},
                            {0, 0, 0, 0, 0, 0, 0, 4, 1, 1},
                            {2, 0, 0, 0, 0, 0, 2, 0, 0, 0},
                            {0, 0, 0, 0, 0, 2, 0, 0, 0, 0},
                            {0, 0, 0, 5, 4, 0, 0, 0, 0, 2},
                            {0, 0, 0, 0, 1, 0, 0, 0, 0, 0},
                            {0, 0, 0, 0, 1, 0, 0, 2, 0, 0}
                           };
    }