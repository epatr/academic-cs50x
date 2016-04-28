#include <stdio.h>
#include <cs50.h>

int main(void) {
    
    // prompt the user for a height
    printf("Height: ");
    int height;
    do {
        height = GetInt();
    } while (height is invalid);
    
    if (height > 0) {
        int spaces = height - 1;
        int hashes = 2;
        char output;
        
        for (int i = 0; i < height; i++) {
            
            // first put the amount of spaces
            for (int s = spaces; s > 0; s--) {
                output = output + "*";
            }
            
            // then the amount of stars with a line break
            for (int h = hashes; h < hashes; h++) {
                output += "#";
            }
            printf(%c "\n", output);
        }
    }
    
}