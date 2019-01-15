#include <stdio.h>

main()
{
    int a;
    int b;
    int c;

    printf("정수 3개를 입력하시오: ");
    scanf(" %d %d %d", &a, &b, &c);

    if ((a < b) && (a < c))
    {
        printf("가장 작은 수는 %d입니다.", a);
    }
    else if ((b < a) && (b < c))
    {
        printf("가장 작은 수는 %d입니다.", b);
    }
    else
    {
        printf("가장 작은 수는 %d입니다.", c);
    }

    return 0;
}
