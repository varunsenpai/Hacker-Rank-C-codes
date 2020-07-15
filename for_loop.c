#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b;
    const char *my_input[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    scanf("%d\n%d", &a, &b);
  	// Complete the code.


    int i = 0,j = 0;
    for(i = a; i <= b; i++)
    {
        if((i <= 9) && (i >= 1))
        printf("%s\n", my_input[i]);

        if((i>9) && ((i%2)==0))
        printf("even\n");

        if((i>9) && ((i%2)!=0))
        printf("odd\n");
    }

    //for(j = b; )
    
    return 0;
}

