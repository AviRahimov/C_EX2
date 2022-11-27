#include <stdio.h>
#include "my_mat.h"

// creating a two dimensional array with size 10*10
// int mat [10][10];
// two indexes of the array 

//void Mat_numbers();
int mat1 [10][10] =        {{0, 3, 1, 0, 0, 2, 0, 0, 0, 0}, 
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
int main(){
    int i, j;
    char c;
   // printf("Enter a letter: \n");
   // scanf("%c", &c);
    while(c != 'D'){
        printf("Enter a letter: \n");
        scanf("%c", &c);
        switch (c)
    {
    case 'A':
        printf("IDK");
        //Mat_numbers();
        find_paths(mat1);
        printf("\n");
        break;

    case 'B':
        printf("write i and j indexes you want to explore the path for them: ");
        scanf("%d %d", &i, &j);
        isPath(i, j);
        printf("\n");
        break;

    case 'C':
        printf("write i and j indexes you want to explore the path for them: ");
        scanf("%d %d", &i, &j);
        printf("%d", Shortest_path(i, j));
        printf("\n");
        break;

    default:
    printf("Wrong letter\n");
        break;
    }
    //printf("Enter a letter: \n");
    //scanf("%c", &c);
    }
// Function number 1
    void Mat_numbers(){
        int mat [10][10] = {{0, 3, 1, 0, 0, 2, 0, 0, 0, 0}, 
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
}