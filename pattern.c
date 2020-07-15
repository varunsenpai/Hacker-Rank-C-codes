#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;

    int input_numbers;

    //int *individual_rows;

    scanf("%d", &input_numbers);

    int **full_array = (int **)malloc((2*(input_numbers)-1) * sizeof(int *));

    for(i = 0; i < (2*(input_numbers)-1); i++)
    {
        full_array[i] = (int *)malloc((2*(input_numbers)-1) * sizeof(int *));
    }

    for(i = 0; i < (2*(input_numbers)-1); i++)
    {
        for(j = 0; j < (2*(input_numbers)-1); j++)
        {
            full_array[i][j] = 0;
        }
    }

    int loop_input = input_numbers;

            for(j = 0; j < (2*(input_numbers)-1); j++)
            {
                for(i = 0; i < (2*(input_numbers)-1); i++)
                {
                    if(full_array[i][j]==0)
                    {
                        full_array[i][j] = loop_input;
                    }
                    if(full_array[j][i]==0)
                    full_array[j][i] = loop_input;
                    if(full_array[i][(2*(input_numbers)-2) - j] == 0)
                    full_array[i][(2*(input_numbers)-2) - j] = loop_input;
                    if(full_array[(2*(input_numbers)-2) - j][i] == 0)
                    full_array[(2*(input_numbers)-2) - j][i] = loop_input;
                }
                --loop_input;
            }


    for(i = 0; i < (2*(input_numbers)-1); i++)
    {
        for(j = 0; j < (2*(input_numbers)-1); j++)
        {
            printf("%d ", full_array[i][j]);
        }
        printf("\n");
    }


    return 0;
}
