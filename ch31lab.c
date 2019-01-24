#include <stdio.h>

void swap(int *x, int *y)
{
    int tmp;

    printf("swap() 호출 \n");
    tmp = *x;
    *x = *y;
    *y = tmp;
}

int main(void)
{
    int a = 100, b = 200;

    printf("main() a-%d b=%d\n", a, b);
    swap(&a, &b);
    printf("main() a=%d b=%d\n", a, b);

    return 0;
}
