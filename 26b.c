#include <stdio.h>

int main() {
    int count;

    
    for (int i = 1; i <= 5; i++) {
      
        if (i <= 3) {
            count = 2 * i - 1;       
        } else {
            count = 2 * (6 - i) - 1; 
        }

        
        for (int j = 1; j <= count; j++) {
            printf("*\n");
        }

        
        if (i < 5) {
            printf("\n");
        }
    }
    return 0;
}
