#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
    //--0 1 2 3 4 5 6 7 8
    //0 5 5 5 5 5 5 5 5 5 
    //1 5 4 4 4 4 4 4 4 5 
    //2 5 4 3 3 3 3 3 4 5 
    //3 5 4 3 2 2 2 3 4 5 
    //4 5 4 3 2 1 2 3 4 5 
    //5 5 4 3 2 2 2 3 4 5 
    //6 5 4 3 3 3 3 3 4 5 
    //7 5 4 4 4 4 4 4 4 5 
    //8 5 5 5 5 5 5 5 5 5

    int len = 2*n-1;

    for (int i=0; i<len; i++) {
        for (int j=0; j<len; j++) {
            int minX = (j >= len/2) ? ((len) - j) : j+1; //horizontal distance
            int minY = (i >= len/2) ? ((len) - i) : i+1; //vertical distance
            (minX < minY) ? printf("%d ", n+1 - minX) : printf("%d ", n+1 - minY); //print the minimum distance
        } 
        printf("\n");
    }

    return 0;
}