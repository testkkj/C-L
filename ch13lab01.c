#include <stdio.h>

main()
{
    int a,b;
    int la,sm;

    printf("정수 2개를 입력하시오: ");
    scanf(" %d %d", &a, &b);

    la = a > b ? a : b;
    sm = a > b ? b : a;

    printf("작은 수는 %d", sm);
    printf("큰 수는 %d", la);

    return 0;
}
