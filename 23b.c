#include <stdio.h>

int main() {
    int rows = 5;
    int columns = 5;

   
    for (int i = 0; i < rows; i++) {
        // Inner loop for each column
        for (int j = 0; j < columns; j++) {
            printf("*");
        }
       
        printf("\n");
    }

    return 0;
}
