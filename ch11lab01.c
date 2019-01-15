#include <stdio.h>

main()
{
    int a;

    printf("정수를 입력하시오: ");
    scanf(" %d", &a);
    if ((a % 2) == 0)
    {
        printf("%d은 짝수입니다.", a);
    }
    else
    {
        printf("%d은 홀수입니다.", a);
    }

    return 0;
}
