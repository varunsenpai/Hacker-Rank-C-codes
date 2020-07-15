#include <stdio.h>
#include <stdlib.h>

void update(int *a,int *b) {
    int new_sum;

    int *c;
    signed int new_diff, diff_1;

    new_sum = *a + *b;

    

    diff_1 = *a - *b;

    //printf("----%d", diff_1);

    new_diff = abs(diff_1);

    *a = new_sum;
    *b = new_diff;

    

}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
