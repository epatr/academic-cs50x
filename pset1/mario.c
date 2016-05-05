#include <stdio.h>
#include <cs50.h>

int main(void) {
    
    // prompt the user for a height
    printf("Height: ");
    int height = GetInt();
    
    if (height > 0) {
        
        // spaces starts at 0 and goes to height-1
        int hashes = 1;
        // spaces start at height-1 because it'll go to 0
        int spaces = height-1;
        
        // create a row, starting at 0 and less than the height input
        for (i = 0; i < height; i++) {
        
            do {
                printf("#");
                height--;
            } while (height > hashes);
            
        printf("\n");
        }


    }
    
}