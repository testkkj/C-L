#include <stdio.h>

main()
{
    int a,b;

    printf("정수를 입력하시오: ");
    scanf(" %d", &a);

    b=1;
    while (a > 0)
    {
        b = b * a;
        --a;
    }

    printf("팩토리얼값(n!)= %d", b);

    return 0;
}
