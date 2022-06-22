#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int maxAnd = 0;
  int maxOr = 0;
  int maxXor = 0;
  for (int i=1; i<=n; i++) {
      for (int j=i+1; j<=n; j++) {
        // printf("%d %d %d %d %d\n", i, j, i&j, i|j, i^j);
         maxAnd = ((maxAnd < (i&j)) && ((i&j)  < k)) ?  i&j  : maxAnd;
         maxOr =  ((maxOr  < (i|j)) && ((i|j) < k))  ?  i|j  : maxOr;
         maxXor = ((maxXor < (i^j)) && ((i^j)  < k)) ?  i^j  : maxXor;
      }
  }
  printf("%d\n", maxAnd);
  printf("%d\n", maxOr);
  printf("%d\n", maxXor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
