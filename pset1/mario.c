#include <stdio.h>
#include <cs50.h>

int main(void) {
    
    // prompt the user for a height greater than 0 and less than 23
    int height;
    
    do {
    printf("Height: ");
    height = GetInt();
    } while (height < 0 || height > 23);
    
    if (height > 0) {
        
        // top row is always 1 hash
        int hashes = 1;
        
        // no spaces on the last line
        int spaces = height-1;

        // create a row, starting at 0 and less than the height input
        for (int i = 0; i < height; i++) {
            
            hashes++;
            
            for (int s = 0; spaces > s; s++) {
                printf(" ");
            }
            
            for (int h = 0; h < hashes; h++) {
                printf("#");
            }
            
            printf("\n");
            
            spaces--;
            
        }


    }
    
}