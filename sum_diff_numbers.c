#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int input_1, input_2, sum_1, difference_1;

    float finput_1, finput_2, sum_2, difference_2;

    scanf("%d", &input_1);
    scanf("%d", &input_2);
    scanf("\n");

    scanf("%f", &finput_1);
    scanf("%f", &finput_2);

    sum_1 = input_1 + input_2;
    difference_1 = input_1 - input_2;

    sum_2 = finput_1 + finput_2;
    difference_2 = finput_1 - finput_2;

    printf("%d %d\n", sum_1, difference_1);
    printf("%.1f %.1f", sum_2, difference_2);


    return 0;
}
