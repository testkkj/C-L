#include <stdio.h>

main()
{
    float a,c;
    int b,i;

    printf("실수의 값을 입력하시오: ");
    scanf(" %f", &a);
    printf("\n거듭제곱횟수를 입력하시오: ");
    scanf(" %d", &b);

    c=1.0;
    for (i=0; i<b; i++)
        c *= a;

    printf("결과값은 %f", c);

    return 0;
}
