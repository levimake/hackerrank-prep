#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
      // Complete the code.
    char * labels[9] = {"one","two","three","four","five","six","seven","eight","nine"};
    for (int i=a; i <= b; i++) {
        if (i > 0) {
            i >= 1 && i<= 9 ? printf("%s",labels[i-1]) :
                (i % 2 == 0 ? printf("%s", "even") : printf("%s", "odd"));
            printf("\n");
        }                  
    }
    return 0;
}

