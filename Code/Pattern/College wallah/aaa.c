#include <stdio.h>

int main() {
    int n;
    
    printf("Enter the size of the diamond (number of rows in upper half): ");
    scanf("%d", &n);
    
    // Upper half of the diamond
    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Print stars
        for (int k = 1; k <= i; k++) {
            printf("* ");
        }
        printf("\n");
    }
    
    // Lower half of the diamond
    for (int i = n - 1; i >= 1; i--) {
        // Print spaces
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Print stars
        for (int k = 1; k <= i; k++) {
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}