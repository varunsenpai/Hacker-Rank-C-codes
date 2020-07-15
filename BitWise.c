#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  int i,j;

  int max_of_or = 0, max_of_and = 0, max_of_xor = 0, sum = 0, ands = 0, xors = 0;

  for(i = 1; i <= n; i++)
  {
      for(j = i + 1; j <= n; j++)
      {
           sum = i | j;
           if((sum > max_of_or) && (sum < k))
           max_of_or = sum;

           ands = i & j;
           if(ands > max_of_and && (ands < k))
           max_of_and = ands;

           xors = i ^ j;
           if(xors > max_of_xor && (xors < k))
           max_of_xor = xors;
      }
  }

  
  printf("%d\n", max_of_and);
  printf("%d\n", max_of_or);
  printf("%d\n", max_of_xor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
