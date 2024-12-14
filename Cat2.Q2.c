#include <stdio.h>

int main() {
    // Declaring and initializing a 2D array
    int scores[2][2] = {
        {10, 20},
        {30, 40}
    };

    // Printing the elements of the 2D array using a nested for loop
    printf("Elements of the array are:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", scores[i][j]);
        }
        printf("\n"); // New line for each row
    }

    return 0;
}