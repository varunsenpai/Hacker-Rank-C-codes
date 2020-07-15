#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);

    int digit;
    int sum = 0;

    while (n > 0)
    {
        digit = n %10;
        sum = sum + digit;
        n = n/10;
    }
    //Complete the code to calculate the sum of the five digits on n.

    printf("%d", sum);
    return 0;
}
