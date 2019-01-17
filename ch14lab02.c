#include <stdio.h>

main()
{
    int a;
    int b = 0;

    do
    {
     printf("정수를 입력하시오: ");
     scanf(" %d", &a);
     b = a + b;
    }
    while (a != 0);

    printf("합계 = %d", b);

    return 0;
}
