#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i, temp;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }

    int new_num = num - 1;
    //if(num%2 == 1)
    {
        for(i = 0; i < num/2; i++)
        {
            //printf("%d----", i);
            temp = arr[i];
            arr[i] = arr[new_num - i];
            arr[new_num-i] = temp;
        }


    }

    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}
