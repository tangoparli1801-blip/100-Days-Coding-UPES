#include <stdio.h>

int main(){
    int n, rem, r, org, temp, digits = 0;
    
    printf("Enter the number to check if the number is armstrong or not:\n");
    if(scanf("%d", &n) == 1){ // scanf returns 1 if one integer is successfully read
        r = 0;
        org = n;
        
        // 1. First, count the number of digits using a temporary variable
        temp = n;
        while(temp != 0){
            digits++;
            temp = temp / 10;
        }
        
        // 2. Calculate the Armstrong sum
        while(n != 0){
            rem = n % 10;
            
            // Multiply 'rem' by itself 'digits' times manually
            int power = 1;
            for(int i = 0; i < digits; i++){
                power *= rem;
            }
            
            r += power;
            n = n / 10;
        }
        
        // 3. Compare with original value
        if(r == org){
            printf("%d is an Armstrong number.", org);
        }
        else{
            printf("%d is not an Armstrong number.", org);
        }
    }
    else{
        printf("Invalid Input.");
    }
    
    return 0;
}