#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  

    char ch;
    char string1[100];
    char string2[100];

    scanf("%c", &ch);
    scanf("\n");
    scanf("%[^\n]%*c", string1);
    scanf("\n");
    scanf("%[^\n]%*c", string2); 

    printf("%c\n", ch);
    printf("%s\n", string1);
    printf("%s\n", string2); 
    return 0;
}
