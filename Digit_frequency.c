#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char str1[1000];

    //char str2[100];

    scanf("%s", str1);

    //printf("%s\n", str1);

    int i = 0;
    int j = 0;

    int count;

    int z = 0;
    char compare[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

    int str2[10] = {0};
    

    for(i = 0; i < 10; i++)
    {
        count = 0;
        for(j = 0; str1[j]!= '\0'; j++)
        {
            if(str1[j] == compare[i])
            ++count;
        }
        str2[i] = count;
    }

    for(z = 0; z < 10; z++)
    {
        printf("%d ", str2[z]);
    }

    



    return 0;
}
