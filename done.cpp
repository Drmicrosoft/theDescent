#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * The while loop represents the game.
 * Each iteration represents a turn of the game
 * where you are given inputs (the heights of the mountains)
 * and where you have to print an output (the index of the mountain to fire on)
 * The inputs you are given are automatically updated according to your last actions.
 **/
int main()
{
    int target = 0 ;
    int x[8] ; 
    int y[8] ; 
    int change = 0 ;
    // game loop
    while (1) {
        for (int i = 0; i < 8; i++) {
            int mountainH; // represents the height of one mountain.
            scanf("%d", &mountainH);
            x[i]=mountainH;
            y[i]=i;
        }

        // Write an action using printf(). DON'T FORGET THE TRAILING \n
        // To debug: fprintf(stderr, "Debug messages...\n");
        for ( int j = 0 ; j < 8 ; j++)
        {
            for ( int k = j ; k < 8 ; k++)
            {
                if(x[j]>x[k])
                {
                    change = x[j];
                    x[j] = x[k];
                    x[k] = change;
                    
                    change = y[j];
                    y[j] = y[k];
                    y[k] = change;
                    
                    
                }
                
                
            }
        }
        
        target = y[7];
        printf("%d\n",target); // The index of the mountain to fire on.
    }

    return 0;
}
